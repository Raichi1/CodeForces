#include <bits/stdc++.h>
using namespace std;

void solve(){
    double angle;cin>>angle;
    double calc = 360/(180-angle);
    int nc = calc;
    if(calc==nc)cout<<"YES";
    else cout<<"NO";
    cout<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}