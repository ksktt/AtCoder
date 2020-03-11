#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int h, n;
    cin >> h >> n;
    const int INF = 1e9 + 5;
    vector<int> dp(h+1, INF);
    dp[0] = 0;
    while (n--) {
        int x, y;
        cin >> x >> y;
        for(int i = 0; i <= h; i++) {
            int j = min(h, i + x);
            dp[j] = min(dp[j], dp[i] + y);
        }
    }

    cout << dp[h] << endl;

    return 0;
}
