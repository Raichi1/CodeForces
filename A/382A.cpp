#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string s,res;
    cin>>s>>res;
    string left="",right="";
    bool b = 0;
    for(int i =0; i <s.size();++i){
        if(s[i]=='|'){b=1;continue;}
        if(!b)left+=s[i];
        else right+=s[i];
    }
    int diff=abs((int)left.size()-(int)right.size()), resta = res.size()-diff;
    if(resta%2!=0||diff>res.size())cout<<"Impossible";
    else{
        int partial = diff+resta/2;
        int sl = left.size(),sr=right.size();
        for(int i = 0; i<res.size();++i){
            if(sl>sr){
                if(i<partial)right+=res[i];
                else left+=res[i];
            }
            else{
                if(i<partial)left+=res[i];
                else right+=res[i];
            }
            
        }
        left+='|';
        cout<<left<<right;
    }
    return 0;
}