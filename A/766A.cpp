#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string a,b;
    cin>>a>>b;
    if(a==b)cout<<-1;
    else if(a.size()>b.size())cout<<a.size();
    else cout<<b.size();
    return 0;
}