#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int k, r,m=1,cont=0;
    cin>>k>>r;
    while(m){
        cont+=k;
        if((cont-r)%10==0||(cont)%10==0)break;
        m++;
    }
    cout<<m;
    return 0;
}