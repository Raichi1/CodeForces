#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    char arr[n][n], d=' ',nd=' ';
    int countD=0, countND=0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin>>arr[i][j];
            if(d==' ')d=arr[i][j];
            if(nd==' '&&i!=j)nd=arr[i][j];
            if(i==j||j==n-1-i){
                if(d==arr[i][j])countD++;
            }
            else if(nd==arr[i][j])countND++;
        }
    }
    if(countD+countND==n*n && d!=nd)cout<<"YES";
    else cout<<"NO";
    return 0;
}