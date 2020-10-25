#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

ll factorial(ll n) {
    ll a = 1;
    for (ll i = 2; i <= n; i++) {
        a *= i;
        a %= mod;
    }
    return a;
}

ll modinv(ll a, ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

int main() {
    ll x, y;
    cin >> x >> y;
    ll a, b;
    ll ans;
    if ((- x + 2 * y) % 3 != 0 || (2 * x - y) % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    else {
        a = (- x + 2 * y) / 3;
        b = (2 * x - y) / 3;
        ans = factorial(a + b);
        ans %= mod;
        ans *= modinv(factorial(a), mod);
        ans %= mod;
        ans *= modinv(factorial(b), mod);
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}