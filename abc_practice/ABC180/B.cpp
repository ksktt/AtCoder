#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    double man = 0, eu = 0, che = 0;
    for (int i = 0; i < n; i++) {
        man += abs(x[i]);
    }
    for (int i = 0; i < n; i++) {
        eu += pow(abs(x[i]), 2);
    }
    eu = sqrt(eu);
    for (int i = 0; i < n; i++) {
        che = max(che, abs(x[i]));
    }
    cout << fixed << setprecision(10) << man << " " << eu << " " << che << endl;
    return 0;
}