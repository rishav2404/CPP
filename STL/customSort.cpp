#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(int a,int b){
    if(a>b) return true;
    return false;
}



int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);

    for(int i=0;i<v.size();i++){
        cin>> v[i].first >> v[i].second;
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(should_i_swap(v[i],v[j])){
                swap(v[i],v[j]);
            }
        }    
    }


    return 0;
}