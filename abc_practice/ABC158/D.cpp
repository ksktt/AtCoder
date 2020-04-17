#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    deque<char> Q;
    for(char c : s) Q.push_back(c);
    bool flip = false;
    for(int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            flip = !flip;
        }
        if (t == 2) {
            int f;
            cin >> f;
            char c;
            cin >> c;
            if (flip) {
                f = 3 - f;
            }
            if (f == 1) {
                Q.push_front(c);
            }
            if (f == 2) {
                Q.push_back(c);
            }
        }
    }
    if (flip) reverse(Q.begin(), Q.end());
    string ans;
    for (char c : Q) ans += c;
    cout << ans << endl;
    return 0;
}