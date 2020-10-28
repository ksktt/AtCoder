#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll a;
    a = sqrt(n);
    ll x, y;
    while (1) {
        if (n % a == 0) {
            x = a;
            y = n / a;
            break;
        }
        else {
            a = a - 1;
        }
    }  
    cout << x + y - 2 << endl;
    return 0;
}