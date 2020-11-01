#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, r, s, p;
    cin >> n >> k >> r >> s >> p;
    map<char,int> score;
    score['r'] = p;
    score['s'] = r;
    score['p'] = s;
    string t;
    cin >> t;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool ok = true;
        if (i >= k) {
            if (t[i] == t[i - k]) {
                ok = false;
                t[i] = 'x';
            }
        }
        if (ok) ans += score[t[i]];
    }
    cout << ans << endl;
    return 0;
}