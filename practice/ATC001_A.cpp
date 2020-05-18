#include <bits/stdc++.h>
using namespace std;

int h, w;
char city[500][500];
string ans = "No";
bool d[500][500] = {};

void dfs(int x, int y) {
    if(x < 0 || x >= h || y < 0 || y >= w || city[x][y] == '#' || d[x][y]) {
        return;
    }
    d[x][y] = true;

    if(city[x][y] == 'g') {
        ans = "Yes";
        return;
    }

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    for(int i = 0; i < 4; i++) {
        dfs(x + dx[i],  y + dy[i]);
    }
}

int main() {
    cin >> h >> w;
    int sx, sy;
    int gx, gy;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> city[i][j];
            if(city[i][j] == 's') {
                sx = i;
                sy = j;
            }
            if(city[i][j] == 'g') {
                gx = i;
                gy = j;
            }
        }
    }
    dfs(sx, sy);
    cout << ans << endl;
    return 0;
}