#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> e(r);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        r[a].push_back(b);
        r[b].push_back(a);
    }
    vector<int> c(n);
    for (int i = 0; i < q; i++) {
        int p, x;
        cin >> p >> x;
        p--;
        s[p] += x;
    }
    queue<int> q;

    return 0;
}