#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i <n; ++i)cin>>v[i];
    int sum =-v[0],ans = min(0,-v[0]);
    for(int i = 0; i<n-1; ++i){
        sum+=(v[i]-v[i+1]);
        ans = min(sum,ans);
    }
    cout<<abs(ans)<<'\n';
}
 
int main(){
    solve();
    return 0;
}