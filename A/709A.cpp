#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, b,d,val,res=0,cont=0;
    cin>>n>>b>>d;
    while(n--){
        cin>>val;
        if(val>b)continue;
        res+=val;
        if(res>d){
            res=0;
            cont++;
        }
    }
    cout<<cont;
    return 0;
}