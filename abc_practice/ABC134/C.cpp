#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    b = a;
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n; i++) {
        if (b[i] != a[0]) {
            cout << a[0] <<endl;
        }
        else {
            cout << a[1] << endl;
        }
    }
    return 0;
}