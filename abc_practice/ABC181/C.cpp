#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9+7;

int main() {
    int n;
    cin >> n;
    vector<double> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++) {
        double grad1, grad2;
        for (int j = i + 1; j < n; j++) {
            if (x[j] - x[i] == 0) {
                grad1 = inf;
            }
            else {
                grad1 = (y[j] - y[i]) / (x[j] - x[i]);
            }
            for (int k = j + 1; k < n; k++) {
                if (x[k] - x[i] == 0) {
                    grad2 = inf;
                }
                else {
                    grad2 = (y[k] - y[i]) / (x[k] - x[i]);
                }
                if (grad1 == grad2) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}