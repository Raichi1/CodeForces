#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,a,b,c,cont=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(a+b+c>=2)cont++;
    } 
    cout<<cont;
    return 0;
}