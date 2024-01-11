#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,w;
    cin>>k>>n>>w;
    int ans = ((w*(w+1))/2)*k-n;
    cout<<((ans>0)?ans:0)<<'\n';
}

int main(){
    solve();
    return 0;
}