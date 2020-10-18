#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = 0;
    }
    for (int i = n; i >= 1; i--) {
        int sum = 0;
        for (int j = i; j < n+1; j += i) {
            sum += b[j];
        }
        sum %= 2;
        if (sum != a[i]) {
            b[i] = 1;
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (b[i] == 1) {
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}