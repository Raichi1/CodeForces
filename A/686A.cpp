#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,x,val,childrens=0;
    char s;
    cin>>n>>x;
    while(n--){
        cin>>s>>val;
        if(s=='-'){
            if(x<val)childrens++;
            else x-=val;
        }else x+=val;
    }
    cout<<x<<' '<<childrens;
    return 0;
}