#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,a;
    cin>>n;
    vector<pair<int,int>> v1,v2,v3;
    for(int i = 1; i <= n; ++i){
        cin>>a;
        if(a==1)v1.push_back({a,i});
        else if(a==2)v2.push_back({a,i});
        else v3.push_back({a,i});
    }
    int minimun=min(min((int)v1.size(),(int)v2.size()),(int)v3.size());
    cout<<minimun<<'\n';
    for(int i = 0; i < minimun; ++i)
        cout<<v1[i].second<<' '<<v2[i].second<<' '<<v3[i].second<<'\n';
    return 0;
}