#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll ans = 0;
    for (ll i = 0; i <= min(n, k); i++) {
        for (ll j = 0; i + j <= min(n, k); j++) {
            vector<ll> d(min(n, k));
            for(ll l = 0; l < i; l++) {
                d.push_back(v[l]);
            }
            for(ll l = 0; l < j; l++) {
                d.push_back(v[n - l - 1]);
            }
            sort(d.begin(), d.end());
            ll res = min(n, k) - (i + j);
            for (ll m = 0; m < res; m++) {
                if (d[0] < 0) {
                    d.erase(d.begin());
                }
            }
            ll sum = 0;
            for (ll m = 0; m < d.size(); m++) {
                sum += d[m];
            }
            ans = max(sum, ans);
        }
    }
    cout << ans << endl;
    return 0;
}