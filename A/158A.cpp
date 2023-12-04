#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n],cont=0;
    for(int i = 0; i <n; ++i)cin>>arr[i];
    k = arr[k-1];
    for(int i = 0; i<n; ++i){
        if(k==0){
            if(arr[i]>k)cont++;
        }
        else if(arr[i]>=k)cont++;
    }
    cout<<cont<<'\n';
    return 0;
}