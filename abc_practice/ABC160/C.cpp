#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);

    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = a[0] + k - a[n - 1];
    for (int i = 0; i < n - 1; i++) {
        res = max(res, a[i + 1] - a[i]);
    }
    cout << k - res << endl;
    return 0;
}