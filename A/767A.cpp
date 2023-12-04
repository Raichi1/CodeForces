#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,vl;
    cin>>n;
    int max=n;
    vector<bool> v(n+1,0);
    while(n--){
        cin>>vl;
        v[vl] = 1;
        while(v[max]){
            cout<<max<<' ';
            --max;
        }
        cout<<'\n';
    }
    return 0;
}