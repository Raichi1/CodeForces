#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000000+5
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,vl,cont=0;
    cin>>n;
    map<int,int> sf;
    while(n--){
        cin>>vl;
        sf[vl]++;
    }
    for(auto it = sf.begin(); it!=sf.end();++it){
        auto back = it, front = it;
        --back; ++front;
        if(it==sf.begin()||front==sf.end())continue;
        if(it->first>back->first&&it->first<front->first)cont+=it->second;
    }
    cout<<cont;
    return 0;
}