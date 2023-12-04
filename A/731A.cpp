#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int start = 0,moves=0,walk;
    for(int i = 0; i < s.size();++i){
        int index = s[i]-'a';
        walk = abs(start-index);
        if(walk>13)moves+=26-walk;
        else moves+=walk;
        start = index;
    }
    cout<<moves;
    return 0;
}