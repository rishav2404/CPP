#include <bits/stdc++.h>
using namespace std;

int main(){
    // n-> nodes , m-> edges
    int n, m;
    cin >> n >> m;

    // using adjacency MATRIX
    int adj[n+1][n+1];

    // graph here
    for(int  i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;   // 2->3
        adj[v][u] = 1;   // 3->2
    }


    // using adjacency LIST
    vector<int> adj1[n+1];

    //graph here
    for(int  i =0; i < m ; i++){
        int u1, v1;
        cin >> u1 >> v1;
        adj1[u1].push_back(v1);
        adj1[v1].push_back(u1);
    }

}