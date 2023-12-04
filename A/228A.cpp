#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=4,a;
    set<int> st;
    while(n--){
        cin>>a;
        st.insert(a);
    }
    cout<<4-st.size();
    return 0;
}