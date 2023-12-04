#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char px;
    bool BWG = 1;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin>>px;
            if(px=='C'||px=='M'||px=='Y'){
                BWG=0;
                break;
            }
        }
    }
    cout<<((BWG)?"#Black&White":"#Color");
    return 0;
}