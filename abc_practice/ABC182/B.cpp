#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    int ans;
    for (int i = 2; i <= 1000; i++) {
        int tmp = 0;
        for (auto x : a) {
            if (x % i == 0) {
                tmp++;
            }
        }
        if (tmp >= cnt) {
            ans = i;
            cnt = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}