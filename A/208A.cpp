#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s,msg="",word="";
    cin>>s;
    for(int i = 0; i < s.size();++i){
        word+=s[i];
        n=word.size();
        if(n>=3&&word[n-3]=='W'&&word[n-2]=='U'&&word[n-1]=='B'){
            for(int j = 0; j < n-3; ++j)msg+=word[j];
            if(msg[msg.size()-1]!=' '&&!msg.empty())msg+=' ';
            word.clear();
        }
    }
    if(!word.empty())msg+=word;
    cout<<msg;
    return 0;
}