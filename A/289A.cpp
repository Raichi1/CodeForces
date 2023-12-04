#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,cont=0,l,r;
    cin>>n>>k;
    while(n--){
        cin>>l>>r;
        cont+=(r-l+1);
    }
    cout<<((cont%k==0)?0:(k-cont%k));
    return 0;
}