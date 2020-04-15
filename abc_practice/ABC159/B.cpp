#include <bits/stdc++.h>
using namespace std;
 
int main () {
    string s1, s2;
    cin >> s1;
    string x1, y1, x2, y2;
    x1 = s1.substr(0, (s1.size() - 1) / 2);
    y1 = s1.substr((s1.size() + 3) / 2 - 1);
    x2 = x1;
    y2 = y1;
    s2 = s1;
    reverse(x1.begin(), x1.end());
    reverse(y1.begin(), y1.end());
    reverse(s1.begin(), s1.end());
    if( x1 == x2 && y1 == y2 && s1 == s2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}