#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    int ans = 1;
    while(n / k != 0) {
        n = n / k;
        ans++;
    }
    cout << ans << endl;
    return 0;
}