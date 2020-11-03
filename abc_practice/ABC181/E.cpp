#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1000000009;


int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> h(n), w(m);
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> w[i];
    }
    sort(h.begin(), h.end());
    vector<int> sum1((n + 1) / 2), sum2((n + 1) / 2);
    for (int i = 0; i < n - 1; i += 2) sum1[i / 2 + 1] = sum1[i / 2] + h[i + 1] - h[i];
    for (int i = n - 2; i > 0; i -= 2) sum2[i / 2] = sum2[i / 2 + 1] + h[i + 1] - h[i];
    int ans = inf;
    for (int i : w) {
        int x = lower_bound(h.begin(), h.end(), i) - h.begin();
        if (x & 1) x ^= 1;
        if (ans > sum1[x / 2] + sum2[x / 2] + abs(h[x] - i)) ans = sum1[x / 2] + sum2[x / 2] + abs(h[x] - i);
    }
    cout << ans << endl;
    return 0;
}