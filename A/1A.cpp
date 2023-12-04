#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,c;
    cin>>m>>n>>c;
    long long a = ceil(m/(c*1.0)),b=ceil(n/(c*1.0));
    cout<<a*b;
    return 0;
}