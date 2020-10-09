#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i< n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    vector<int> x(n);
    int x1 = sum;
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) x1 -= 2 * a[i];
    }
    x[0] = x1;
    for (int i = 1; i < n; i++) {
        x[i] = (2 * a[i - 1] - x[i - 1]);
    }
    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " ";
    }
    return 0;
}