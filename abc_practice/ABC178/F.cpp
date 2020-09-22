#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<int> c(n+1);
    vector<int> d(n+1);
    for(int i = 0; i < n+1; i++) {
        c[i] = 0;
        d[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        c[a[i]]++;
        d[b[i]]++;
    }
    for (int i = 0; i < n+1; i++) {
        if (c[i] + d[i] > n) {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        c[i] += c[i-1];
        d[i] += d[i-1];
    }
    int x = 0;
    for (int i = 1; i <= n; i++) {
        x = max(x, c[i] - d[i-1]);
    }
    cout << "Yes" << endl;
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << b[(i+n-x)%n];
    }
    cout << "\n";
    return 0;
}