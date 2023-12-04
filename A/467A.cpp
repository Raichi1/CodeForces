#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int main(){
    int n,cont=0;
    cin>>n;
    pair<int,int> room;
    for(int i = 0; i < n; ++i){
        cin>>room.f>>room.s;
        cont+=(room.s-room.f>1);
    }
    cout<<cont;
    return 0;
}