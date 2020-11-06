#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> ac(n + 1);
    vector<int> wa(n + 1);
    for (int i = 1; i <= n; i++) {
        wa[i] = 0;
        ac[i] = false;
    }
    int acnum = 0;
    int wanum = 0;
    while (m--) {
        int p;
        string s;
        cin >> p >> s;
        if (ac[p]) continue;
        if (s == "AC") {
            ac[p] = true;
            acnum++;
            wanum += wa[p];
        }
        else if (s == "WA") {
            wa[p]++;
        }
    }
    cout << acnum << " " << wanum << endl;
    return 0;
}