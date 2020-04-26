#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double dis, ans = 0;
    double coo[n][2];
    for(int i = 0; i < n; i++) {
        cin >> coo[i][0] >> coo[i][1];
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            dis = double(sqrt(pow(coo[i][0] - coo[j][0], 2.0) + pow(coo[i][1] - coo[j][1], 2.0)));
            if (dis > ans) {
                ans = dis;
            }
        }
    }
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}