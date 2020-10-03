#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ks(m);
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        ks[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> ks[i][j];
            ks[i][j]--;
        }
    }
    vector<int> p(m);
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }
    int ans = 0;
    for (int bit = 0; bit < (1 << n); bit++) {
        bool ok = true;
        for (int i = 0; i < m; i++) {
            int c = 0;
            for (int j : ks[i]) {
                if (bit & (1 << j)) {
                    c++;
                }
            }
            c %= 2;
            if (c != p[i]) {
                ok = false;
            }
        }
        if (ok) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}