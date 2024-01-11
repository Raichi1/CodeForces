#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, m, val;
    cin>>n;
    vector<int> v(n+1);
    for(int i = 1; i<=n; ++i){
        cin>>val;
        v[val]=i;
    }
    cin>>m;
    int tleft = 0, tright = 0;
    while(m--){
        cin>>val;
        tleft+=v[val],tright+=n-(v[val]-1);
    }
    cout<<tleft<<' '<<tright;
}

int32_t main(){
    solve();
    return 0;
}