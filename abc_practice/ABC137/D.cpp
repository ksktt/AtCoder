#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> work(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        work[i].first = a;
        work[i].second = b;
    }
    sort(work.begin(), work.end());
    int ans = 0;
    int j = 0;
    priority_queue<int> q;
    for (int i = 1; i <= m; i++) {
        while (j < n && work[j].first <= i) {
            q.push(work[j].second);
            j++;
        }
        if (!q.empty()) {
            int a;
            a = q.top();
            q.pop();
            ans += a;
        }
    }
    cout << ans << endl;
    return 0;
}