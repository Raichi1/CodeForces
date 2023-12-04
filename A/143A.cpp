#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(int i = 1; i <=9; ++i){
        if(r1-i<=9&&d1-i<=9&&c1-i<=9){
            for(int j = 1; j<=9; ++j){
                if(r1-i-j==0&&c2-j<=9&&d2-j<=9&&j!=i){
                    for(int k = 1; k <=9; ++k){
                        if(c1-i-k==0&&r2-k<=9&&d2-j-k==0&&k!=j&&k!=i){
                            for(int z = 1; z<=9; ++z){
                                if(c2-j-z==0&&r2-k-z==0&&d1-i-z==0&&z!=k&&z!=i&&z!=j){
                                    cout<<i<<' '<<j<<'\n';
                                    cout<<k<<' '<<z;
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<-1;
    return 0;
}