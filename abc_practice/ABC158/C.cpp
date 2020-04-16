#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= 1009; i++) {
        int c, d;
        c = i * 0.08;
        d = i * 0.10;
        if (c == a && d == b) {
            cout << i << endl;
            break;
        }
        if (i == 1009 && c != a && d != b) {
            cout << -1 << endl;
        }
    }
    return 0;
}