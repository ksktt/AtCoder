#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    } 
    else {
        return gcd(b, a % b);
    }
}

int main() {
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    ll x;
    x = gcd(a, b);
    for(ll i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            ans++;
            while (x % i == 0) {
                x /= i;
            }
        }
    }
    if (x > 1) ans++;
    cout << ans << endl;
    return 0;
}