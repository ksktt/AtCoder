#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int a, b;
    a = x / 500;
    x -= 500 * a;
    b = x / 5;
    cout << 1000 * a + 5 * b << endl;
    return 0;
}