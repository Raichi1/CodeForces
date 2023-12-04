#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,skols,aux,i=1;
    cin>>n;
    map<int,int> mp;
    while(i<=n){
        cin>>skols;
        mp[i]=skols;
        ++i;
    }
    int m,x,y;
    cin>>m;
    while(m--){
        cin>>x>>y;
        if(x-1>0)mp[x-1]+=(y-1);
        if(x+1<=n)mp[x+1]+=(mp[x]-y);
        mp[x]=0;
    }
    for(auto e: mp){
        cout<<e.second<<'\n';
    }
    return 0;
}