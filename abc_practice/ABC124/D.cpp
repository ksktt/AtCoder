#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    int ans = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == n) {
            v.push_back(i);
        }
        else if (s.at(i) != s.at(i - 1)) {
            v.push_back(i);
        }
    }
    int m = v.size();
    for (int i = 0; i < m - 1; i++) {
        if (s.at(v.at(i)) == '1') {
            ans = max(ans, v.at(min(i + 2 * k + 1, m - 1)) - v.at(i));
        }
        else if (s.at(v.at(i)) == '0') {
            ans = max(ans, v.at(min(i + 2 * k, m - 1)) - v.at(i));
        }
    }
    cout << ans << endl;
    return 0;
}