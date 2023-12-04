#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll total(ll v, ll n, ll k){
    ll ans = v;
    for(int i = 1; i <= 30; ++i){
        ll w = v/pow(k,i);
        if(w==0||ans>=n) break;
        ans+=w;
    }
    return ans;
}

ll minV(ll n, ll k){
    ll start = 1, end = n;
    while(start<end){
        ll mid = (start+end)/2;
        if(total(mid,n,k)>=n)end=mid;
        else start = mid+1;
    }
    return end;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    cout<<minV(n,k);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}
