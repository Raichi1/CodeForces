#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int b=0, groups = 0;
    vector<int> v;
    for(int i = 0; i < s.size(); ++i){
        if(s[i]=='B')++b;
        else {
            if(b!=0){
                v.push_back(b);
                ++groups;
            }
            b = 0;
        }
    }
    if(b!=0){
        v.push_back(b);
        groups++;
    }
    cout<<groups<<'\n';
    for(auto e: v){
        cout<<e<<' ';
    }
}

int main(){
    solve();
    return 0;
}
