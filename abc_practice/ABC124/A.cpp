#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a <= b) {
        ans += b;
        b = b - 1;
    }
    else{
        ans += a;
        a = a - 1;
    }
    if (a <= b) {
        ans += b;
    }
    else {
        ans += a;
    }
    cout << ans << endl;
}