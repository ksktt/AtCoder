#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll val = 0;
    while ((double)a * x <= 2e18 && (a - 1) * x <= b && a * x < y) {
        x *= a;
        val++;
    }
    val += (y - 1 - x) / b;
    cout << val << endl;
    return 0;
}