#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        ans += (a + b) * (b - a + 1) / 2;
    }
    cout << ans << endl;
    return 0;
}