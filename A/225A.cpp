#include <bits/stdc++.h>
using namespace std;

int caras[]={6,5,4,3,2,1};

int main(){
    int n,top,aux;
    cin>>n>>top;
    while(n--){
        int a, b;
        cin>>a>>b;
        aux = caras[top-1];
        if(a==top||b==top||b==aux||a==aux||caras[a-1]==aux||caras[b-1]==aux){
            cout<<"NO";
            return 0;
        }
        top=aux;
    }
    cout<<"YES";
    return 0;
}