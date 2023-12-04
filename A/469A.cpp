#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,p,a,q;
    cin>>n>>p;
    vector<int> v(n+1,0);
    for(int i = 0; i<p;++i){
        cin>>a;
        v[a]++;
    }
    cin>>q;
    for(int i = 0; i<q; ++i){
        cin>>a;
        v[a]++;
    }
    bool valid = 1;
    for(int i = 1; i <= n; ++i)
        if(v[i]==0){
            valid=0;
            break;
        }
    cout<<((valid)?"I become the guy.":"Oh, my keyboard!");
    return 0;
}