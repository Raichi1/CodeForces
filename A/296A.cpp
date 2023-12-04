#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,vl;
    cin>>n;
    if(n==1)cout<<"YES";
    else{
        int aux=n;
        multiset<int> ms;
        while(aux--){
            cin>>vl;
            ms.insert(vl);
        }
        int max=-1;
        for(int i : ms)if(max<(int)ms.count(i))max=ms.count(i);
        if((n-max)>=(max-1))cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}