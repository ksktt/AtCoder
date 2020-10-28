#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, x;
    cin >> a >> b >> x;
    double v;
    v = a * a * b;
    double theta;
    if (x > v / 2) {
        theta = atan(2 * (v - x) / (a * a * a));
    }
    else {
        theta = atan(a * b * b / (2 * x));
    }
    cout << fixed << setprecision(10) << theta * 180 / M_PI <<  endl;
    return 0;
}