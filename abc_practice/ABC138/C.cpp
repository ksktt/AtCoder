#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++) {
        double tmp;
        tmp = (v[0] + v[1]) / 2;
        v.erase(v.begin());
        v.erase(v.begin());
        v.push_back(tmp);
        sort(v.begin(), v.end());
    }
    cout << v[0] << endl;
    return 0;
}