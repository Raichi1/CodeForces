#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    reverse(b.begin(),b.end());
    cout<<((a==b)?"YES":"NO");
    return 0;
}