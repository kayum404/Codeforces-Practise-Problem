#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector <int> s{a,b,c,d};
        sort(s.begin(),s.end());
        if(s[0]==s[3]){
            cout<<"YES\n";
        }
            else cout<<"NO\n";

    }

    return 0;
}
