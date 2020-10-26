#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    vector<pair<int, int>> vp;
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
        vp.emplace_back(a, b);
    }
    int k = 0;
    map<pair<int, int>, int> I;
    vector<int> cs(n, 0);
    vector<int> used(n, 0);
    queue<int> que;
    used[0] = 1;
    que.emplace(0);
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        if (k < (int)g[v].size()) {
            k = g[v].size();
        }
        int cur = 1;
        for (int u : g[v]) {
            if(used[u]) continue;
            if(cur == cs[v]) cur++;
            cs[u] = I[make_pair(u,v)] = I[make_pair(v,u)] = cur++;
            used[u] = 1;
            que.emplace(u);
        }
    }
    cout << k << endl;
    for(auto p:vp) {
        cout<< I[p] <<endl;
    }
    return 0;
}