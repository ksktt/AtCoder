#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    vector<ll> b(n);
    for (int i = 0; i < n + 1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += min(a[i], b[i]);
        ans += min(a[i + 1], b[i] - min(a[i], b[i]));
        a[i + 1] = a[i + 1] - min(a[i + 1], b[i] - min(a[i], b[i]));
    }
    cout << ans << endl;
    return 0;
}