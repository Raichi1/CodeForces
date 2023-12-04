#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; ++i)cin>>v[i].f>>v[i].s;
    sort(v.begin(),v.end());
    for(int i = 0; i < n-1; ++i){
        if(v[i].s>v[i+1].s){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}