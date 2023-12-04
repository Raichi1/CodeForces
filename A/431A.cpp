#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int count=0,i=1,a;
    vector<int> v(5);
    while(i<v.size()){
        cin>>a;
        v[i]=a;
        ++i;
    }
    string s;
    cin>>s;
    for(char e: s)
        count+=v[e-'0'];
    cout<<count;
    return 0;
}