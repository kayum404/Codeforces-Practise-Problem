#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    map<string,int> cnt;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        cnt[s]++;
        if(cnt[s]>1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}