#include <bits/stdc++.h>
using namespace std;
 
#define f first
#define s second
 
void solve(){
    string s;
    vector<pair<int,char>> v(3,pair<int,char>(0,' '));
    v[0].s='A',v[1].s='B',v[2].s='C';
    while(cin>>s){
        if(s[1]=='<'){
            v[s[2]-'A'].f++;
        }else{
            if(s[1]=='>')
            v[s[0]-'A'].f++;
        }
    }
    sort(v.begin(),v.end());
    bool valid = 1;
    string word = "";
    for(int i = 0; i <2; ++i){
        word+=v[i].s;
        if(v[i].f==v[i+1].f)valid=0;
    }
    word+=v[2].s;
    cout<<((valid)?word:"Impossible")<<'\n';
}
 
int main(){
    solve();
    return 0;
}