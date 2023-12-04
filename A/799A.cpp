#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int time = 0, time2=0, possTotal = ceil(n/(k*1.0))*t;
    bool exist=false;
    while(true){
        if(exist)++time2;
        if(time==d)exist=1;
        if(time%t==0 && time)n-=k;
        if(time2%t==0 && exist && time2)n-=k;
        if(n<=0)break;
        ++time;
    }
    cout<<((time<possTotal)?"YES":"NO");
    return 0;
}