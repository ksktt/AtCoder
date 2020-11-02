#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool ok = false;
    if (s.size() == 1 && s == "8") {
        ok = true;
    } 
    else if (s.size() == 2) {
        if (stoi(s) % 8 == 0) {
            ok = true;
        }
        else {
            swap(s[0], s[1]);
            if (stoi(s) % 8 == 0) {
                ok = true;
            }
        }
    }
    else {
        vector<int> cnt(10);
        for (char x : s) {
            cnt[x - '0']++;
        }
        for (int i = 112; i < 1000; i += 8) {
            auto c = cnt;
            for (char x : to_string(i)) c[x - '0']--;
            int min_ele = 0;
            for (int x : c) {
                min_ele = min(min_ele, x);
            }
            if (min_ele >= 0) ok = true;
        }
    }
    if (ok) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}