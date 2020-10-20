#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    map<string, ll> m;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        m[s]++;
    }
    for (auto i : m) {
        if (i.second >= 2) {
            ans += i.second * (i.second - 1) / 2;
        }
    }
    cout << ans << endl;
    return 0;
}