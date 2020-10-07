#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    string ans = "No";
    for (int i = 0; i < n; i++) {
        int d1, d2;
        bool flag = false;
        cin >> d1 >> d2;
        if (d1 == d2) {
            flag = true;
        }
        else {
            flag = false;
        }
        if (flag) {
            cnt++;
        }
        else {
            cnt = 0;
        }
        if (cnt == 3) {
            ans = "Yes";
        }
    }
    cout << ans << endl;
    return 0;
}