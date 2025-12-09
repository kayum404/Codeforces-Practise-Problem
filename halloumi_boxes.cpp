#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool sorted(ll arr[],int n){
     for(int i=1; i<n; i++){

            if(arr[i-1]>arr[i]){
                return false;
            }
        }
        return true;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        ll arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(!sorted(arr,n)){
            if(k>=2) cout<<"YES\n";
           else cout<<"NO\n";
        }else cout<<"YES\n";

    }

    return 0;
}

