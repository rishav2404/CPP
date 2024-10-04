#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int e;
//     cin>>e;
//     vector<int> power(n);
//     vector<int> bonus(n);
//     for(int i = 0 ; i < n; i++){
//         cin >> power[i];
//     }
//     for(int i = 0 ; i < n; i++){
//         cin >> bonus[i];
//     }
    
//     map<int, int> myMap;
//     for(int i = 0; i < n ; i++){
//         myMap[power[i]] = bonus[i];
//     }
//     int count = 0;
//     sort(power.begin(),power.end());
//     for(int i = 0 ; i < n; i++){
//         if(power[i] <= e){
//             e += myMap[power[i]];
//             count ++;
//         }
//         else break;
//     }
//     cout<< count <<endl;
// }

int main() {
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> power_bonus(n);
    for (int i = 0; i < n; ++i) {
        cin >> power_bonus[i].first;
    }
    for (int i = 0; i < n; ++i) {
        cin >> power_bonus[i].second;
    }

    sort(power_bonus.begin(), power_bonus.end());

    int count = 0;
    for (const auto& pb : power_bonus) {
        if (pb.first <= e) {
            e += pb.second;
            ++count;
        } else {
            break;
        }
    }

    cout << count << endl;
}