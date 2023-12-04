#include <bits/stdc++.h>
using namespace std;


int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, k,good=0;
    cin>>n>>k;
    while(n--){
        bool vl = 1;
        vector<bool> valid(10,0);
        string num;
        cin>>num;
        for(int i = ((k==0)?1:0); i < num.size(); ++i){
            valid[(num[i]-'0')]=1;
        }
        ++good;
        for(int i = 0; i <= k; ++i){
            if(!valid[i]){
                --good;
                break;
            }
        }
        
    }
    cout<<good;
    return 0;
}