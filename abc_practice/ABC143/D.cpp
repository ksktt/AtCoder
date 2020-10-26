#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> l(n), v(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        v[i] = l[i];
    }
    ll ans = 0;
    sort(v.begin(), v.end());
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            auto itr = lower_bound(v.begin(), v.end(), v[i] + v[j]);
            ll ng = distance(itr, v.end());
            ans += (n - 1 - i) - ng;
        }
    }
    cout << ans << endl;
    return 0;
}