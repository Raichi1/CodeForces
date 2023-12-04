#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string s;
    set<char> st;
    cin>>s;
    for(auto e: s)st.insert(e);
    cout<<((st.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}