#include <bits/stdc++.h>
using namespace std;

#define MY_PI 3.14159265358979323846

void solve(){
    double d,h,v,e;
    cin>>d>>h>>v>>e;
    double ans = ((d*d)*MY_PI*h)/(4*v-(d*d)*MY_PI*e);
    if(ans<0)cout<<"NO\n";
    else cout<<fixed<<setprecision(12)<<"YES\n"<<ans<<'\n';
}

int main(){
    solve();
    return 0;
}