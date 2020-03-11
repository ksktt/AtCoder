#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int ans;
    cin >> a >> b;
    if (a % b == 0) {
        ans = a / b; 
    } else {
        ans = a / b + 1;
    }

    cout << ans << endl;
}
