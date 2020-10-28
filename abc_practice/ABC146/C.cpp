#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll digit(ll n) {
    ll cnt = 1;
    while (1) {
        n /= 10;
        if (n == 0) {
            break;
        }
        cnt++;
    }
    return cnt;
}

int main() {
    ll a, b, x;
    cin >> a >> b >> x;
    ll l = 0, r = 1e9 + 1;
    while (r - l > 1) {
        ll m = (r + l) / 2;
        ll p = a * m + b * digit(m);
        if (p <= x) {
            l = m;
        }
        else {
            r = m;
        }
    }
    cout << l << endl;
    return 0;   
}