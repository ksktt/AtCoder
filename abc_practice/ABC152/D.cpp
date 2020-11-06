#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> c(10, vector<int>(10));
    for (int i = 1; i <= n; i++) {
        int x, y;
        y = i % 10;
        int tmp = i;
        while(tmp >= 10) {
            tmp /= 10;
        }
        x = tmp;
        c[x][y]++;
    }
    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            ans += c[i][j] * c[j][i];
        }
    }
    cout << ans << endl;
    return 0;
}