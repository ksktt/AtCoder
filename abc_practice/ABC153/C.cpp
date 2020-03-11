#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> vec(N);
    for(int i = 0; i < N; i++){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    long long sum = 0;

    for(int i = 0; i < N-K; i++){
        sum += vec[i];
    }
    cout << sum << endl;

    return 0;
}