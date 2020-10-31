#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    vector<ll> div;
    ll n;
    cin >> n;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            div.push_back(i);
            if (n / i != i) {
                div.push_back(n / i);
            }
        }
    }
    sort(div.begin(), div.end());
    for (int i = 0; i < div.size(); i++) {
        cout << div[i] << endl;
    }
    return 0;
}