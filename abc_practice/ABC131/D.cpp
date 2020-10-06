#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    vector<vector<ll>> work(n, vector<ll>(2));
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        work[i][0] = b;
        work[i][1] = a;
    }
    sort(work.begin(), work.end());
    int sum = 0;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        sum += work[i][1];
        if (sum > work[i][0]) {
            ok = false;
        }
    }
    if (ok) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}