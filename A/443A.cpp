#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    set<char> st;
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size();++i)
        if(s[i]>='a'&&s[i]<='z')st.insert(s[i]);
    cout<<st.size();
    return 0;
}