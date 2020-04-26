#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, y;
    cin >> n >> y;
    int ans[3] = {-1, -1, -1};
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            int k = n - i - j;
            if(k < 0) {
               break;
            }
            if(10000 * i + 5000 * j + 1000 * k == y) {
                ans[0] = i;
                ans[1] = j;
                ans[2] = k;   
            }
        }
    }
    if(ans[0] == -1) {
        cout << "-1 -1 -1" << endl;
    } else {
        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    }
    return 0;
}