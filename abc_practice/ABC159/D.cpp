#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> b(n+1);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    long long c = 0;
    long long d = 0;
    for(int i = 0; i < n + 1; i++) {
        c += b[i] * (b[i] - 1) / 2;
    }
    for(int i = 0; i < n; i++) {
        d = (b[a[i]] * (b[a[i]] - 1) / 2) - (b[a[i]] - 1) * (b[a[i]] - 2) / 2;
        cout << c - d << endl;
    }
    return 0;
}