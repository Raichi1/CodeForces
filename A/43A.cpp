#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,int> mp;
    string s;
    while(n--){
        cin>>s;
        mp[s]++;
    }
    pair<string,int> pr={"",-1};
    for(auto e: mp){
        if(e.second>pr.second)pr=e;
    }
    cout<<pr.first;
    return 0;
}