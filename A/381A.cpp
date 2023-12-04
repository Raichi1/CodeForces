#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,i=0,a,S=0,D=0,turn=0;
    cin>>n;
    vector<int> v(n);
    while(i<n){
        cin>>a;
        v[i]=a;
        i++;
    }
    int l=0, r=n-1;
    for(i = 0; l <= r; i=l){
        if(v[l]>v[r]){
            (turn%2==0)?S+=v[l]:D+=v[l];
            l++;
        }else{
            (turn%2==0)?S+=v[r]:D+=v[r];
            r--;
        }
        turn++;
    }
    cout<<S<<' '<<D<<'\n';
    return 0;
}