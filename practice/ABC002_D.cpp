#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool z[12][12];
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        z[x][y] = true;
        z[y][x] = true;
    }
    for(int i = 0; i < n; i++) {
        z[i][i] = true;
    }
    int ans = 0;
    for(int mask = 0; mask < (1 << n); mask++) {
        bool flag = true;
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                for(int j = i + 1;  j < n; j++) {
                    if(mask & (1 < j) && !z[i][j]) {
                        flag = false;
                    }
                }
            }
        }
        if(flag) {
            ans = max(ans, __builtin_popcount(mask));
        }
    }
    cout << ans << endl;
    return 0;
}