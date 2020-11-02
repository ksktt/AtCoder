#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
    
    return 0;
}