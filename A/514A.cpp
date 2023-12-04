#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i = ((s[0]-'9'==0)?1:0); i<s.size(); ++i){
        if(s[i]-'0'>'9'-s[i])s[i]=('9'-s[i])+'0';
    }
    cout<<s;
    return 0;
}