#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,z=0,o=0;
    cin>>n;
    char ch[n];
    for(int i = 0; i<n;++i){
        cin>>ch[i];
        (ch[i]=='1')?z++:o++;
    }
    cout<<abs(z-o);
    return 0;
}