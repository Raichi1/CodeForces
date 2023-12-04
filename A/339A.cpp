#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> v;
    string s;
    getline(cin,s);
    stringstream ss(s);
    char value;
    while(ss>>value)
        if(value!='+')v.push_back(int(value-'0'));
    sort(v.begin(),v.end());
    int sig = v.size()-1;
    for(auto e: v)
        cout<<e<<((sig-->0)?'+':' ');
    return 0;
}