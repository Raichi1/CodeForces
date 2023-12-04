#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int a, b,y=0;
    cin>>a>>b;
    while(1){
        a*=3;
        b*=2;
        y++;
        if(a>b)break;
    }
    cout<<y;
    return 0;
}