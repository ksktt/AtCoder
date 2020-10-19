#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    vector<int> a(len, 1);
    for (int i = 0; i < len; i++) {
        if (s[i + 1] == s[i] && s[i] == 'R') {
            a[i + 2] += a[i];
            a[i] = 0;
        }
    }
    for (int i = len - 1; i > 0; i--) {
        if (s[i - 1] == s[i] && s[i] == 'L') {
            a[i - 2] += a[i];
            a[i] = 0;
        }
    }
    for (int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}