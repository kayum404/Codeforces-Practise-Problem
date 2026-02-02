#include <bits/stdc++.h>
using namespace std;

/* ---------- FAST IO ---------- */
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

/* ---------- LOOP ---------- */
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,a,b) for(int i=a;i<=b;i++)

/* ---------- SHORTCUTS ---------- */
#define pb push_back
#define all(v) v.begin(), v.end()

/* ---------- PRINT SHORTCUT ---------- */
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define sp cout << " "

/* ---------- TYPES ---------- */
typedef long long ll;

/* ---------- VECTOR SHORTCUT ---------- */
#define vecin(v,n) vector<ll> v(n); rep(i,n) cin >> v[i];
#define vecprint(v) for(auto x : v) cout << x << " "; cout << "\n";

void solve(){
    int n,k;
    cin >> n >> k;
    string s;cin>>s;
    if(s==string(n,'1')){
        cout<<"1\n";
        return;
    }
    if(1==count(all(s),'1')){
        cout<<"1\n";
        return;
    }
    if(s==string(n,'0')){
        cout<<"0\n";
        return;
    }
    ll ans=0;ll zero=0;
    rep(i,n){
        if(s[i]=='1'){
                if(ans==0) ans++;
                else if(zero>=k-1) ans++;
                zero=0;
        }
        else{
            zero++;
        }
    }
    cout<<ans<<'\n';
}

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
