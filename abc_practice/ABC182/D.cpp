#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll b = 0;
    ll max_b = 0;
    ll ans = 0;
    ll x = 0;
    ll cur;
    for (int i = 0; i < n; i++) {
        b += a[i];
        max_b = max(max_b, b);
        cur = x + max_b; 
        ans = max(ans, cur);
        x = x + b;
    }
    cout << ans << endl;
    return 0;
}