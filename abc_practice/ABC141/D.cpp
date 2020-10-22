#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    priority_queue<ll> a;
    for (int i = 0; i < n; i++) {
        ll p;
        cin >> p;
        a.push(p);
    }
    for (int i = 0; i < m; i++) {
        ll x = a.top();
        a.pop();
        a.push(x / 2);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a.top();
        a.pop();
    }
    cout << ans << endl;
    return 0;
}