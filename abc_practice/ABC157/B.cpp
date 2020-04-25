#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3];
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int b;
        cin >> b;
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(a[j][k] == b) {
                    a[j][k] = 0;
                }
            }
        }
    }
    string ans = "No";
    for(int i = 0; i < 3; i++) {
        if(a[i][0] == 0 and a[i][1] == 0 and a[i][2] == 0) {
            ans = "Yes";
        }
    }
    for(int i = 0; i < 3; i++) {
        if(a[0][i] == 0 and a[1][i] == 0 and a[2][i] == 0) {
            ans = "Yes";
        }
    }
    if(a[0][0] == 0 and a[1][1] == 0 and a[2][2] == 0) {
        ans = "Yes";
    } else if(a[0][2] == 0 and a[1][1] == 0 and a[2][0] == 0) {
        ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}