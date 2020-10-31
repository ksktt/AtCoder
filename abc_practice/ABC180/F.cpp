#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using mint = atcoder::modint1000000007;
int n, m, l;

mint solve(int L) {
    mint dp[301][301];
    dp[0][0] = 1;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j <= m; j++) {
            mint x = dp[i][j];
            for (int k = 1; i + k <= n && j + k - 1 <= m && k <= L; k++) {
                if (k > 1) dp[i + k][j + k] += x;
                if (k == 2) x /= 2;
                dp[i + k][j + k - 1] += x * k;
                x *= n - i - k;
            }
        }
    }
    return dp[n][m];
}

int main() {
    cin >> n >> m >> l;
    cout << (solve(l) - solve(l - 1)).val() << endl;
    return 0;
}