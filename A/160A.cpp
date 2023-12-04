#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,sum=0,cont=0,max;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin>>v[i];
        sum+=v[i];
    }
    int middle = sum/2;
    sort(v.begin(),v.end());
    sum=0;
    for(int i = n-1; i >= 0; --i){
        sum+=v[i];
        if(middle<sum)break;
        else cont++;
        max=sum;
    }
    for(int i = 0; i < n; ++i){
        if(max+v[i]>middle){
            cont++;
            break;
        }
    }
    cout<<cont;
    return 0;
}