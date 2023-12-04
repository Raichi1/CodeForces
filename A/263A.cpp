#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    pair<int,int> p1;
    int val;
    for(int i =1; i <= 5; ++i){
        for(int j = 1; j<=5; ++j){
            cin>>val;
            if(val==1)p1={i,j};
        }
    }
    int moves=0;
    if(p1.first<3)moves+=3-p1.first;
    else moves+=p1.first-3;
    if(p1.second<3)moves+=3-p1.second;
    else moves+=p1.second-3;
    cout<<moves;
    return 0;
}