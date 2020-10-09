#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ll l, r;
    cin >> l >> r;
    ll ans = 2019;
    if (r - l >= 2019) {
        ans = 0;
    }
    else {
        for(ll i = l; i <= r; i++) {
            for(ll j = i + 1; j <= r; j++) {
                ans = min(ans, (i%2019)*(j%2019)%2019);
            }
        }
    }
    cout << ans << endl;
    return 0;
}