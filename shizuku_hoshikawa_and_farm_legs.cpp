#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=1;
        if(n%2==0 && n>=2){
            cnt+=(n/4);
            cout<<cnt<<"\n";
        }
        else cout<<"0\n";
    }

    return 0;
}
