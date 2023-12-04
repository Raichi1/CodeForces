#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    if(n==1&&t==10)cout<<-1;
    else{
        if(t==10){n--;cout<<1;};
        for(int i = 0;i < n; ++i){
            if(t!=10)cout<<t;
            else cout<<0;
        }
    }
    return 0;
}