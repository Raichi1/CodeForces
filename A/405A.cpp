#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,i=0;
    cin>>n;
    vector<int> v(n);
    while(i<n){
        cin>>a;
        v[i]=a;
        i++;
    }
    sort(v.begin(),v.end());
    for(int e: v)cout<<e<<' ';
    return 0;
}