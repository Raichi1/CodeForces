#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    char grid[n][n];
    int start = n/2;
    for(int i = 0; i < n; ++i){
        if(i==n/2)start=0;
        for(int j = 0; j < n; ++j){
            if(j>=start&&j<=(n-1-start))grid[i][j]='D';
            else grid[i][j]='*';
        }
        if(i<n/2)start-=1;
        else start+=1;
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout<<grid[i][j];
        }
        cout<<'\n';
    }
}

int main(){
    solve();
    return 0;
}