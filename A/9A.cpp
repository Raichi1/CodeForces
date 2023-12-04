#include <bits/stdc++.h>
using namespace std;

int main(){
    int Y,W,mx,cifras;
    cin>>Y>>W;
    mx=max(Y,W);
    cifras=6-mx+1;
    if(cifras%2==0&&cifras!=6)cout<<(cifras>>1)<<"/3";
    else{
        if(cifras==6)cout<<"1/1";
        else{
            if(cifras==3)cout<<"1/2";
            else cout<<cifras<<"/6";
        }
    }
    return 0;
}