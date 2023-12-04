#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    char ch = 'a';
    for(int i = 0; i < n; ++i)
        cout<<char((ch+(i%k)));
    return 0;
}