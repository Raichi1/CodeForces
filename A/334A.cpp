#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,aux,changes=0;
    string val;
    cin>>n;
    aux=n;
    vector<string> v;
    while(aux--){
        cin>>val;
        v.push_back(val);
    }
    for(int i = 0; i <n-1; ++i)
        if(v[i]!=v[i+1])changes++;
    cout<<++changes;
    return 0;
}