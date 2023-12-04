#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i<n; ++i){
        cin>>v[i].first>>v[i].second;
        if(v[i].first!=v[i].second){
            cout<<"rated";
            return 0;
        }
    }
    for(int i = 1; i < n; ++i){
        if(v[i].first>v[i-1].first){
            cout<<"unrated";
            return 0;
        }
    }
    cout<<"maybe";
    return 0;
}