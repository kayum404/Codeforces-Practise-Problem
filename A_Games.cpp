#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<pair<int,int>>v(n);
    int ans=0;
    
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[i].first==v[j].second) ans++;
                if(v[i].second==v[j].first) ans++;
            }
        }
    cout<<ans<<"\n";

    return 0;
}