#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,cont=0;
    cin>>n;
    char ch[n];
    vector<bool> v(26,0);
    for(int i = 0; i < n;++i){
        cin>>ch[i];
        if(!v[tolower(ch[i])-'a'])cont++;
        v[tolower(ch[i])-'a']=1;
    }
    cout<<((cont==26)?"YES":"NO");
    return 0;
}