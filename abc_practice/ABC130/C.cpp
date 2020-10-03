#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll w, h, x, y;
    cin >> w >> h >> x >> y;
    cout << double(w * h) / 2;
    if (x == double(w) / 2 && y == double(h) / 2) {
        cout << " 1" << endl;
    }
    else {
        cout << " 0" << endl;
    }
    return 0;
}
