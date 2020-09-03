#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int ans = t.size();

    for (int i = 0; i <= s.size() - t.size(); i++) {
        int dif = 0;
        for (int j = 0; j < t.size(); j++) {
            if (t[j] != s[i+j]) {
                dif++;
            }
        }
        ans = min(ans, dif);
    }

    cout << ans << endl;

    return 0;
}