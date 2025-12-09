#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==1) {
            if(i!=1) cout<<" ";
            cout<<"I hate ";
            if(i==n) cout<<"it";
            else cout<<"that";
        }
        if(i%2==0){
            if(i!=1) cout<<" ";
            cout<<"I love ";
            if(i==n) cout<<"it";
            else cout<<"that";
        }
        
    }

    return 0;
}