#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    set<pair<string,string>> st;
    while(n--){
        string s,t;
        cin>>s>>t;
        st.insert({s,t});
    }
    
    cout<<st.size()<<endl;
    return 0;
}