#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,hm,a,cont=0;
    cin>>n>>hm;
    while(n--){
        cin>>a;
        (a>hm)?cont+=2:cont++;
    }
    cout<<cont;
    return 0; 
}