#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> ok(n+1, true);
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        ok[a] = false;
    }
    vector<ll> dp(n+1);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= min(n, i+2); j++) {
            if (ok[i]) {
                dp[j] += dp[i];
                dp[j] %= mod;
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}