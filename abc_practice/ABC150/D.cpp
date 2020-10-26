#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd (int a, int b) {
    if (b == 0) return a;
    else {
        return gcd(b, a % b);
    }
}

int lcm (int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t = 1;
    for (int i = 0; i < n - 1; i++) {
        if (((a[i] / 2) / (a[i + 1] /2)) % 2 == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        t = max(t, lcm(t, a[i] / 2));
    }
    int ans = m / t;
    if (ans % 2 == 0) {
        ans /= 2;
    }
    else {
        ans = (ans + 1) / 2;
    }
    cout << ans << endl;
    return 0;
}