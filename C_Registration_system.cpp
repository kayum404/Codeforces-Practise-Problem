#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    map<string,int>Cnt;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        Cnt[s]++;
        if(Cnt[s]<2) cout<<"OK\n";
        else cout<<s<<Cnt[s]-1<<endl;
    }

    return 0;
}