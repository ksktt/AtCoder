#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> e(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    map<int, int> c;
    for (int i = 0; i < q; i++) {
        int p, x;
        cin >> p >> x;
        p--;
        c[p] += x;
    }
    vector<int> ans(n, -1);
    queue<int> que;
	que.push(0);
    ans[0] = c[0];
	while (que.size() > 0) {
		int i = que.front();
		que.pop();
		for (int j : e[i]) {
			if (ans[j] != -1) continue;
            ans[j] = ans[i] + c[j];
			que.push(j);
		}
	}
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}