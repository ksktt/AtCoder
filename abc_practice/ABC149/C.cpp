#include <bits/stdc++.h>
using namespace std;

bool judge(int n) {
    bool flag = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    int x;
    cin >> x;
    for (int i = x; i < 2 * x; i++) {
        if (judge(i)) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}