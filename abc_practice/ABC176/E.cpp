#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;
    vector<int> h(M), w(M);
    for (int i = 0; i < M; i++) {
        cin >> h[i] >> w[i];
    }
    vector<int> row(H, 0), col(W, 0);
    int max_row, max_col, max_row_ele, max_col_ele;
    for (int i = 0; i < M; i++) {
        row[h[i] - 1]++;
        col[w[i] - 1]++;
    }
    max_row = max_element(row.begin(), row.end()) - row.begin();
    max_col = max_element(col.begin(), col.end()) - col.begin();
    max_row_ele = *max_element(row.begin(), row.end());
    max_col_ele = *max_element(col.begin(), col.end());
    int ans = max_row_ele + max_col_ele;
    cout << ans << endl;
    cout << max_row << max_col << endl;
    for (int i = 0; i < M; i++) {
        if (h[i] - 1 == max_row && w[i] - 1 == max_col) {
            ans = ans - 1;
        }
    }
    cout << ans << endl;
    return 0;
}