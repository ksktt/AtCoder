#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

int main() {
    string s;
    cin >> s;
    ll dp[100005][13];
    dp[0][0] = 1;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        int c;
        if (s[i] == '?') {
            c = -1;
        }
        else {
            c = s[i] - '0';
        }

        for (int j = 0; j < 10; j++) {
            if (c != -1 && c != j) continue;
            for (int k = 0; k < 13; k++) {
                dp[i + 1][(k * 10 + j) % 13] += dp[i][k];
                dp[i + 1][(k * 10 + j) % 13] %= mod;
            }
        }
    }
    cout << dp[len][5] << endl;
    return 0;
}