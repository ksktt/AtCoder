#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int tmp = p[0];
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (p[i] <= tmp) {
            tmp = p[i];
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}