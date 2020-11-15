#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    int res;
    vector<int> a(3);
    while (true) {
        if (n == 0) {
            break;
        }
        res = n % 10;
        res %= 3;
        a[res]++;
        n /= 10;
    }
    int dig = a[0] + a[1] + a[2];
    int sum = a[1] + 2 * a[2];
    int ans = -1;
    if (sum % 3 == 0) {
        ans = 0;
    }
    else if (sum % 3 == 1) {
        if (a[2] >= 2 && dig >= 3) {
            ans = 2;
        }
        if (a[1] >= 1 && dig >= 2) {
            ans = 1;
        }
    }
    else if (sum % 3 == 2) {
        if (a[1] >= 2 && dig >= 3) {
            ans = 2;
        }
        if (a[2] >= 1 && dig >= 2) {
            ans = 1;
        }
    }
    cout << ans << endl;
    return 0;
}