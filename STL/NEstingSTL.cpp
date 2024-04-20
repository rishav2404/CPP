#include <bits/stdc++.h>
using namespace std;
int main(){

    // int t;
    // cin>>t;
    // while(t--){
        map< int , multiset <string> > marks_mpp;
        int n;
        cin>>n;
        for(int i =0;i<n;++i){
            int marks;
            string name;
            cin >> name >> marks;
            marks_mpp[-1*marks].insert(name);
        }

        for(auto &mark_student_pr:marks_mpp){
            auto &students = mark_student_pr.second;
            int marks = mark_student_pr.first;
            for(auto &student : students){
                cout<<student<<" "<< -1*marks<<endl;
            }
        }

    // }
    return 0;
}