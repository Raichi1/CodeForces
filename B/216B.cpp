#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> graph;
vector<bool> visited;

bool cyclic(int v, int past_node, int &cont){
    if(visited[v])return true;
    visited[v]=1;
    cont++;
    for(int i = 0; i < graph[v].size(); ++i){
        if(past_node!=graph[v][i]){
            if(cyclic(graph[v][i],v,cont))return true;
        }
    }
    return false;
}

int main(){
    cin>>n>>m;
    int a,b;
    visited.resize(n,0);
    graph.resize(n);
    for(int i = 1; i <= m; ++i){
        cin>>a>>b;
        --a,--b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int bench=0,cont;
    for(int i = 0; i < n; ++i){
        cont=0;
        if(!visited[i]){
            if(cyclic(i, -1,cont)&& cont&1)bench+=1;
        }      
    }
    cout<<((!((n-bench)&1))?bench:bench+1)<<'\n';
    return 0;
}