#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int ans = 0;
    int tmp = 0;
    for (int i = 0; i < n - 1; i++) {
        if (h[i + 1] <= h[i]) {
            tmp++;
        }
        else {
            tmp = 0;
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}