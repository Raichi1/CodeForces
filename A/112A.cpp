#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string a,b;
    cin>>a>>b;
    for(char&e: a)e=tolower(e);
    for(char&e: b)e=tolower(e);
    if(a<b)cout<<"-1";
    else if(a==b)cout<<'0';
    else cout<<'1';

    return 0; 
}