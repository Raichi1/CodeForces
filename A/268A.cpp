#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,lc,vt,i=0,count=0;
    cin>>n;
    multiset<int> local,visit;
    while(i<n){
        cin>>lc>>vt;
        local.insert(lc);
        visit.insert(vt);
        i++;
    }
    for(int e: local)if(visit.count(e)!=0)count+=visit.count(e);
    cout<<count;
    return 0;
}