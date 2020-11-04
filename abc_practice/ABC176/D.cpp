#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
const long long INF = 1000000009;
int d[1001][1001];
int h, w;
vector<vector<char>> s(h, vector<chat>(w));

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs(int sx, int sy, int gx, int gy) {
    queue<P> que;
    for (int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            d[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while (q.size()) {
        P p = que.front();
        que.pop();
        if (p.first == gx && p.second == gy) break;
        for(int i = 0; i < 4; i++) {
            int nx = p.first + nx[i];
            int ny = p.second + ny[i];
            if (0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] != '#' && d[nx][ny] == INF) {
                qus.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second];
            }
            else if (0 <= nx && nx < h && 0 <= ny && ny < w && (s[nx][ny] == '#' || d[nx][ny] != INF)) {
                
            }
        }
    }
 }

int main() {
    cin >> h >> w;
    int sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    for (int i = 0; i < h; i++) {
        for (int j = 0; i < w; i++) {
            cin >> s[i][j];
        }
    }

    return 0;
}