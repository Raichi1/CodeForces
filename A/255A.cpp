#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, val;
    cin>>n;
    int c=0, bps=0, bck=0; 
    for(int i = 0; i < n; ++i){
        cin>>val;
        if(i%3==0)c+=val;
        else if(i%3==1)bps+=val;
        else bck+=val;
    }
    int mx = max(bps,max(bck,c));
    if(mx==bps)cout<<"biceps";
    else if(mx==c)cout<<"chest";
    else cout<<"back";
    cout<<'\n';
    return 0;
}