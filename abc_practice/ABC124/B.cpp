#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int ans = 1;
    for (int  i = 1; i < n; i++) {
        bool flag = true;
        for (int j = i - 1; j >= 0; j--) {
            if (h[i] < h[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}