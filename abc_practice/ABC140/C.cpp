#include <bits/stdc++.h>
using namespace std;
long long inf = 1e7;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n + 1);
    b[0] = b[n] = inf; 
    for (int i = 1; i <= n - 1; i++) {
        cin >> b[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        a[i] = min(b[i], b[i + 1]);
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}