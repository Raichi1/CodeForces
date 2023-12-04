#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,m,mx;
    long long cont=0;
    cin>>n>>m;
    mx = max(n,m);
    n = min(n,m);
    for(int i = 1; i<=mx; ++i){
        if(i%5+n%5>=5&&i%5!=0)cont+=((n/5)+1);
        else cont+=n/5;
    }
    cout<<cont;
    return 0;
}