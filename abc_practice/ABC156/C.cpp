#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
    vector<int> dis(100);
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < n; j++) {
            dis[i] += pow((x[j] - i - 1), 2);
        }
     }
     cout << *min_element(dis.begin(), dis.end()) << endl;
    return 0;
}