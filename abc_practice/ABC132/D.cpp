#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll factorial(ll n)
{
    ll x = 1;
    for (ll i = 1; i <= n; ++i)
        x *= i;
    return x;
}

int main() {
    ll n, k;
    cin >> n >> k;
    for (ll i = 1; i <= k; i++) {
        ll ans;
        ans = factorial(n - k + 1) / (factorial(n - k + 1 - i) * factorial(i)) * factorial(k - 1) /(factorial(k - i) *  factorial(i - 1));
        ans %= mod;
        cout << ans << endl;
    }
    return 0;
}