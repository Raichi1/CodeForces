#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,pi;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n;++i){
        cin>>pi;
        v[pi-1]=i+1;
    }
    for(int e: v) cout<<e<<' ';
    return 0;
}