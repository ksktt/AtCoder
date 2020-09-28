#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cin >> s1;
    string s2 = s1;
    int ans1 = 0, ans2 = 1;
    for (int i = 0; i < s1.length() - 1; i++) {
        if (s1[i] == s1[i+1]) {
            ans1++;
            if (s1[i] == '0') {
                s1[i+1] = '1';
            }
            else {
                s1[i+1] = '0';
            }
        }
    }
    if (s2[0] == '0') {
        s2[0] = '1';
    }
    else if (s2[0] == '1') {
        s2[0] = '0';
    }
    for (int i = 0; i < s2.length() - 1; i++) {
        if (s2[i] == s2[i+1]) {
            ans2++;
            if (s2[i] == '0') {
                s2[i+1] = '1';
            }
            else {
                s2[i+1] = '0';
            }
        }
    }
    cout << min(ans1, ans2) << endl;
    return 0;
}