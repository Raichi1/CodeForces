#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    long long n,k,pares,impares;
    cin>>n>>k;
    impares = (n%2!=0)?n/2+1:n/2;
    if(k<=impares)cout<<(k*2-1);
    else cout<<(k-impares)*2;
    return 0;
}