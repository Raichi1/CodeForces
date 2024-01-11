#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, a;
    cin>>n>>a;
    vector<int> v(n+2,1);
    for(int i = 1; i <= n; ++i)cin>>v[i];
    int ans = (v[a]==1), i=a-1,j=a+1;
    while(i>0||j<=n){
        if(v[i]==1&&v[i]==v[j]){
            (i>0&&j<=n)?ans+=2:ans++;
        }
        if(i>0)i--;
        if(j<=n)j++;
    }
    cout<<ans<<'\n';
    return 0;
}