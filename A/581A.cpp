#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int days = min(a,b), rest = max(a,b) - days;
    cout<<days<<' '<<rest/2;
    return 0;
}