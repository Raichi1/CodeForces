#include <bits/stdc++.h>
using namespace std;

bool esPrimo(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    float raiz = sqrt(n);
    for(int i = 2; i <=raiz; ++i)
        if(n%i==0)return 0;
    return 1;
}

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,m;
    bool armagedon = 0;
    cin>>n>>m;
    int minPrim;
    for(int i = n+1; i<=m; ++i)
        if(esPrimo(i)){
            minPrim=i;
            break;
        }
    cout<<((minPrim==m)?"YES":"NO");
    return 0;
}