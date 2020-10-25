#include <bits/stdc++.h>
using namespace std;

double dist(int xi, int xj, int yi, int yj) {
    double dx = xi - xj;
    double dy = yi - yj;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        v[i] = i;
    }
    double sum = 0.0;
    do {
        for (int i = 0; i < n - 1; i++) {
            sum += dist(x[v[i]], x[v[i + 1]], y[v[i]], y[v[i + 1]]);
        } 
    } while(next_permutation(v.begin(), v.end()));
    int factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    cout << fixed << setprecision(10) << sum / factorial << endl;
    return 0;
}