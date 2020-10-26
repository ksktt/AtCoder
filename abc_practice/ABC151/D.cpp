#include <bits/stdc++.h>
using namespace std;
const int INF = 100000000;
typedef pair<int, int> P;
int d[20][20];
char s[20][20];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int bfs(int h, int w, int sx, int sy, int gx, int gy) {
    queue<P> que;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            d[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while (que.size()) {
        P p = que.front();
        que.pop();
        if (p.first == gx && p.second == gy) break;
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> s[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            for (int k = 0; k < h; k++) {
                for (int l = 0; l < w; l++) {
                    ans = max(ans, bfs(h, w, i, j, k ,l));
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}