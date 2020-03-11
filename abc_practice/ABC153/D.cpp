#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll H;
    cin >> H;

    ll x = 1, y = 0;
    while (H > 1) {
        H /= 2;
        y++;
        x += pow(2, y);
    }
    
    cout << x << endl;
    return 0;
}