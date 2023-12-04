#include <bits/stdc++.h>
using namespace std;

int main(){
    int changes= 0,n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < s.size()-1; ++i)
        if(s[i]==s[i+1])changes++;
    cout<<changes;
    return 0;
}