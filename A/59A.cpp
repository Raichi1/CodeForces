#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string s,upp="",low="";
    cin>>s;
    int u=0,l=0;
    for(char e: s){
        (islower(e))?l++:u++;
        upp+=toupper(e);
        low+=tolower(e);
    }
    cout<<((u>l)?upp:low);
    return 0;
}