#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll val = 0;
    while (true) {
        if (x * (a - 1) < b && x * a < y) {
            x = x * a;
            val++;
        }
        else {
            break;
        }
    }
    val += (y - 1 - x) / b;
    cout << val << endl;
    return 0;
}