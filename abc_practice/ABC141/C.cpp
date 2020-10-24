#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(q);
    for (ll i = 0; i < q; i++) {
        cin >> a[i];
    }
    vector<ll> cnt(n);
    for (ll i = 0; i < q; i++) {
        cnt[a[i] - 1]++;
    }
    for (ll i = 0; i < n; i++) {
        if (k - (q - cnt[i]) >= 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}