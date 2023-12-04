#include <bits/stdc++.h>
using namespace std;

vector<char> keyboard{'q','w','e','r','t','y','u','i','o','p',
'a','s','d','f','g','h','j','k','l',';',
'z','x','c','v','b','n','m',',','.','/'};

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    char direction;
    cin>>direction;
    string s;
    cin>>s;
    for(int i = 0; i<s.size(); ++i){
        for(int j = 0; j <keyboard.size(); ++j){
            if(direction=='R'){
                if(s[i]=='q'||s[i]=='a'||s[i]=='z'){
                    cout<<s[i];
                    break;
                }
                else{
                    if(s[i]==keyboard[j])cout<<keyboard[j-1];
                }
            }else{
                if(s[i]=='p'||s[i]==';'||s[i]=='/'){
                    cout<<s[i];
                    break;
                }else if(s[i]==keyboard[j]) cout<<keyboard[j+1];
            }
        }
    }
    return 0;
}