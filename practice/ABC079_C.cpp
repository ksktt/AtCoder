#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = s[0] - '0', b = s[1] - '0', c = s[2] - '0', d = s[3] - '0';
    string ans;
    if(a + b + c + d == 7) {
        ans = to_string(a) + '+' + to_string(b) + '+' + to_string(c) + '+' + to_string(d) + '=' + '7'; 
    } else if(a - b + c + d == 7) {
        ans = to_string(a) + '-' + to_string(b) + '+' + to_string(c) + '+' + to_string(d) + '=' + '7'; 
    } else if(a + b - c + d == 7) {
        ans = to_string(a) + '+' + to_string(b) + '-' + to_string(c) + '+' + to_string(d) + '=' + '7'; 
    } else if(a - b - c + d == 7) {
        ans = to_string(a) + '-' + to_string(b) + '-' + to_string(c) + '+' + to_string(d) + '=' + '7'; 
    } else if(a + b + c - d == 7) {
        ans = to_string(a) + '+' + to_string(b) + '+' + to_string(c) + '-' + to_string(d) + '=' + '7'; 
    } else if(a + b - c - d == 7) {
        ans = to_string(a) + '+' + to_string(b) + '-' + to_string(c) + '-' + to_string(d) + '=' + '7'; 
    } else if(a - b + c - d == 7) {
        ans = to_string(a) + '-' + to_string(b) + '+' + to_string(c) + '-' + to_string(d) + '=' + '7'; 
    } else if(a - b - c - d == 7) {
        ans = to_string(a) + '-' + to_string(b) + '-' + to_string(c) + '-' + to_string(d) + '=' + '7';
    }
    cout << ans << endl;
    return 0;
}