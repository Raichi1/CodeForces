#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    if(n%2==0)cout<<n/2;
    else cout<<(n/2-n);
    return  0;
}