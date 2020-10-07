#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 998244353;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> s;
    for (int i = 0; i < k; i++) {
        int l, r;
        cin >> l >> r;
        r++;
        s.emplace_back(l, r);
    }
    vector<ll> dp(n);
    dp[0] = 1;
    dp[1] = -1;
    for (int i = 0; i < n; i++) {
        if (i > 0) dp[i] += dp[i -1];
        for (auto j : s) {
            int l, r;
            l = j.first;
            r = j.second;
            if (i + l < n) dp[i + l] += dp[i] % mod;
            if (i + r < n) dp[i + r] -= dp[i] % mod;
        } 
    }
    cout << dp[n - 1] % mod << endl;
    return 0;
}