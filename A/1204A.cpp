#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string s, aux = "1";
    cin>>s;
    int cont=((s=="0"||s.size()%2==0||s=="1")?0:1);
    while(aux.size()<s.size()){
        aux+="00";
        if(aux!=s)cont++;
    }
    cout<<cont;
    return 0;
}