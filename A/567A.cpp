#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,vl;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin>>vl;
        v[i]=vl;
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<n; ++i){
        cout<<min(((i>0)?abs(v[i-1]-v[i]):INT_MAX),((i+1<n)?abs(v[i+1]-v[i]):INT_MAX))<<' '
        <<max(abs(*v.begin()-v[i]),abs(*v.rbegin()-v[i]))<<'\n';
    }
    return 0;
}