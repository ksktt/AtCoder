#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> ans(n-1);
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            int dis;
            dis = min(abs(j-i), abs(x-i)+1+abs(y-j));
            ans[dis-1]++;
        }
    }
    for(int k = 0; k < n-1; k++){
        cout << ans[k] << endl;
    }
    return 0;
}