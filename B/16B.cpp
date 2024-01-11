#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, a ,b;
    cin>>n>>m;
    vector<queue<int>> v(11);
    while(m--){
        cin>>a>>b;
        v[b].push(a);
    }
    int mb, ans = 0;
    for(int i = 10; i>0 && n>0; --i){
        while(!v[i].empty() && n>0){
            mb = v[i].front();
            v[i].pop();
            if(mb<=n)ans+=(mb*i);
            else ans+=(n*i);
            n-=mb;
        }
    }
    cout<<ans<<'\n';
    return 0;
}