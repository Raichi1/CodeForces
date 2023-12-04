#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;cin>>n;
    string s;
    while(n--){
        cin>>s;
        (s.size()>10)?cout<<s[0]<<s.size()-2<<s[s.size()-1]:cout<<s;
        cout<<'\n';
    }
    return 0;
}