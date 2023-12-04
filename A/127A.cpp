#include <bits/stdc++.h>
using namespace std;

int n,k;
double speed = 50;

void solve(){
    cin>>n>>k;
    double x,y,x1,y1, d=0;
    cin>>x>>y;
    while(--n){
        cin>>x1>>y1;
        d += hypot(x-x1, y-y1);
        x=x1,y=y1;
    }
    double t = d/speed * (double)k;
    cout<<fixed<<setprecision(9)<<t<<'\n';
}

int main(){
    solve();
    return 0;
}