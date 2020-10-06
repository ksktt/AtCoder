#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll e = (a - 1) / c + (a - 1) / d - (a - 1) / lcm(c, d);
    ll f = b / c + b / d - b / lcm(c, d);
    cout << b - a + 1 - (f - e)<< endl;
    return 0;
}