#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;



int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = 0; i < 60; i++) {
        ll cnt_1 = 0;
        ll cnt_0 = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] >> i & 1) {
                cnt_1++;
                cnt_1 %= mod;
            }
        }
        cnt_0 = (n - cnt_1) % mod;
        ll tmp = cnt_0 * cnt_1;
		tmp %= mod;
		for (int k = 0; k < i; k++) {
			tmp *= 2;
			tmp %= mod;
		}
		ans += tmp;
		ans %= mod;
    }
    cout << ans << endl;
    return 0;
}