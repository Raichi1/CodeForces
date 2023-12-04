#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    char arr[n];
    int indexS=-1, indexT;
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
        if(i!=0){
            if(arr[i]=='R'&&arr[i-1]=='.')indexS=i+1;
            if(arr[i]=='L'&&arr[i-1]=='R')indexT=i;
            if(arr[i]=='.'&&arr[i-1]=='R')indexT=i+1;
            if(arr[i]=='L'&&arr[i-1]=='.')indexT=i;
            if(arr[i]=='.'&&arr[i-1]=='L'&&indexS==-1)indexS=i;
        }
    }
    cout<<indexS<<' '<<indexT;
    return 0;
}