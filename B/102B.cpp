#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin>>s;
    int sum, ans =0;
    while(s.size()>1){
        ans++;
        sum=0;
        for(int i = 0; i < s.size(); ++i)sum+=(s[i]-'0');
        s = to_string(sum);
    }
    cout<<ans<<'\n';
}
 
int main(){
    solve();
    return 0;
}
