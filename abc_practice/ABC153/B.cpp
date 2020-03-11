#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;

    //declare vec
    /*
    vector<int> vec(N);
    for (int i = 0; i < N; i++){
        cin >> vec.at(i);
    }
    */

   //not declare vec
   for (int i = 0; i < N; i++){
       int a;
       cin >> a;
       H -= a;
   }

   if (H <= 0) {
       cout << "Yes" << endl;
   } else {
       cout << "No" << endl;
   }
   
}