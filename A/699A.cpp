#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,minTime=1000000005,diff;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)cin>>v[i];
    bool next = 1;
    for(int i = 0; i<s.size()-1;++i){
        if((s[i]=='R'&&s[i+1]=='L'&&v[i]<v[i+1])||(s[i]=='L'&&s[i+1]=='R'&&v[i]>v[i+1])){
            if(minTime>abs(v[i]-v[i+1]))minTime=abs(v[i]-v[i+1]);    
            next=0;
        }
    }
    if(next)cout<<-1;
    else cout<<(int)ceil(minTime/2.0);
    return 0;
}