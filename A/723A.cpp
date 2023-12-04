#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char table[n][m];
    memset(table,'.',sizeof table);
    bool left = 1;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j< m; ++j)table[i][j]='#';
        i++;
        if(left)table[i][m-1]='#';
        else table[i][0]='#';
        left=!left;
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j<m; ++j){
            cout<<table[i][j];
        }
        cout<<'\n';
    }
    return 0;
}