#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,neg=0,pos=0,a,c=0;
    cin>>n;
    while(n--){
        cin>>a;
        (a<0)?neg++:pos+=a;
        if(pos<1&&a==-1)c++;
        if(a==-1&&pos>0)pos--;
    }
    cout<<c;
    return 0;
}