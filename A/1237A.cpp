#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> v;
    int n,a,ln=0,lp=0;
    cin>>n;
    while(n--){
        cin>>a;
        v.push_back(a);
        if(a<0){
            ln+=abs(a/2);
        }else{
            lp+=(a/2);
        }
    }
    int diff = abs(lp-ln);
    for(int i = 0; i < v.size(); ++i){
        if(lp>ln){
            if(v[i]&1){
                if(v[i]<0&&diff){
                    cout<<floor(v[i]/2.0);
                    --diff;
                }
                else cout<<v[i]/2;
            }else cout<<v[i]/2;
        }
        else{
            if(v[i]&1){
                if(v[i]>0&&diff){
                    cout<<ceil(v[i]/2.0);
                    --diff;
                }
                else cout<<v[i]/2;
            }else cout<<v[i]/2;
        }
        cout<<'\n';
    }
    return 0;
}