#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll sum(ll n){
    return (n*(n+1))/2;
}
 
ll nsplit(ll st, ll ed){
    return sum(ed)-sum(st-1);
}
 
ll minSplitters(ll n, ll k){
    ll start = 1, end = k, sum;
    while(start<end){
        ll mid = (start+end)/2;
        sum = nsplit(mid,k);
        if(sum == n)return k-mid+1;
        if(sum>n)start = mid+1;
        else end=mid; 
    }
    return k-start+2;
}
 
void solve(){
    ll n, k;
    cin>>n>>k;
    if(n==1)cout<<0;
    else{
        if(k>=n)cout<<1;
        else{
            k--,n--;
            if(sum(k)<n)cout<<-1;
            else cout<<minSplitters(n,k);
        }
    }
}
 
int main(){
    solve();
    return 0;
}