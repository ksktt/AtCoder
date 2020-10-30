#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    int tmp = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == tmp) {
            ans++;
            tmp++;
        }
    }
    if (ans == 0) {
        cout << -1 << endl;
    }
    else {
        cout << n - ans << endl;
    }
    return 0;
}