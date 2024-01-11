#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)cin>>v[i];
    int cont,ans = 1;
    for(int i = 0; i < n; ++i){
        cont = 1;
        for(int j = i-1; j>=0; --j){
            if(v[j]<=v[j+1])cont++;
            else break;
        }
        for(int k = i+1; k<n; ++k){
            if(v[k-1]>=v[k])cont++;
            else break;
        }
        ans = max(ans,cont);
    }
    cout<<ans<<'\n';
    return 0;
}