#include <bits/stdc++.h>
using namespace std;
int N = 17, M = (1 << 17) + 1;
int dp[M][N];
vector<int> x(N), y(N), z(N);

int cost(int a, int b) {
    return abs(x[a] - x[b]) + abs(y[a] - y[b]) + max(0, z[b] - z[a]);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    memset(dp, 0x3f, sizeof(dp));
    dp[0][0] = 0;
    for (int i = 1; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                for (int k = 0; k < n; k++) {
                    dp[i][j] = min(dp[i][j], dp[i - (1 << j)][k] + cost(k, j));
                }
            }
        }
    }
    cout << dp[(1 << n) - 1][0] << endl;
    return 0;
}