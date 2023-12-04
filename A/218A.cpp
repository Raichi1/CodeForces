#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    n = 2*n+1;
    vector<int> v(n);
    for(int i = 0; i< n; ++i)cin>>v[i];
    cout<<v[0]<<' ';
    for(int i = 1; i< n-1; ++i){
        if(v[i]-1>v[i-1]&&v[i]-1>v[i+1]&&v[i]>v[i-1]&&v[i]>v[i+1]&&k>0){
            cout<<v[i]-1<<' ';
            --k;
        }
        else cout<<v[i]<<' ';
    }
    cout<<v[n-1];
    return 0;
}