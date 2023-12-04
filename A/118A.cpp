#include <bits/stdc++.h>
using namespace std;

set<char> st;

int main(){
    string s;
    st.insert('Y'), st.insert('A'),st.insert('I'),st.insert('E'),st.insert('U'),st.insert('O');
    cin>>s;
    string ans = "";
    for(int i = 0; i < s.size(); ++i){
        if(st.count(toupper(s[i])))continue;
        ans+='.';
        ans+=tolower(s[i]);
    }
    cout<<ans<<'\n';
    return 0;
}