#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, g, p[11], c[11];
    cin >> d >> g;
    for(int i = 0; i < d; i++) {
        cin >> p[i] >> c[i];
    }
    int ans = 1e9;
    for(int mask = 0; mask < (1 << d); ++mask){
        int s = 0, num = 0, rest_max = -1;
        for(int i = 0; i < d; ++i){
            if(mask >> i & 1){
                s += 100 * (i+1) * p[i] + c[i];
                num += p[i];
            }else{
                rest_max = i;
            }
        }
        if(s < g){
            int s1 = 100 * (rest_max + 1);
            int need = (g - s + s1 - 1) / s1;
            if(need >= p[rest_max]){
                continue;
            }
            num += need;
        }
        ans = min(ans, num);
    }
    cout << ans << endl;
    return 0;
}