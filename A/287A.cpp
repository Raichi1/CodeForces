#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    char picture[5][5];
    for(int i = 0; i<5;++i){
        picture[0][i]='0';
        picture[i][0]='0';
    }
    int contW,contB,upLeft,up,left;
    for(int i = 1; i< 5; ++i){
        for(int j = 1; j<5; ++j){
            cin>>picture[i][j];
            upLeft=picture[i-1][j-1],up=picture[i-1][j],left=picture[i][j-1];
            contW=0;
            contB=0;
            if(upLeft!='0')(upLeft=='.')?contW++:contB++;
            if(left!='0')(left=='.')?contW++:contB++;
            if(up!='0')(up=='.')?contW++:contB++;
            (picture[i][j]=='.')?contW++:contB++;
            if(contW==3||contB==3||contB==4||contW==4){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}