/* Checking balanced paresnthesis problem
using STACK and UNORDERED MAP ---easy way */

#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols = {{'[',-3},{'{',-2},{'(',-1},{']',3},{'}',2},{')',1}};

string isBalanced(string s){
    stack<char> st;

    for (char barcket:s){
        if(symbols[barcket] < 0)
            st.push(barcket);
        else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top]+symbols[barcket] != 0) return "NO";
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<< isBalanced(s)<<endl;
    }
    return 0;
}