#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long c;
    if (n % (a + b) >= a) {
        c = a;
    } else {
        c = n % (a + b);
    }
    cout << n / (a + b) * a + c << endl;
    return 0;
}