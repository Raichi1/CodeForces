#include <bits/stdc++.h>
using namespace std;

string c = "Cube", t = "Tetrahedron", o = "Octahedron", d="Dodecahedron";

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, cont=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s==c)cont+=6;
        else if(s==t)cont+=4;
        else if(s==o)cont+=8;
        else if(s==d)cont+=12;
        else cont+=20;
    }
    cout<<cont;
    return 0;
}