#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,a=0,d=0;;
    string s;
    cin>>n>>s;
    for(int i = 0 ; i < s.size();++i)
        ('A'==s[i])?a++:d++;
    cout<<((a<d)?"Danik":(a==d)?"Friendship":"Anton");
    return 0;
}