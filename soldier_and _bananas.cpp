#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int cost=0;
    for(int i=1;i<=w;i++){
        cost+=(k*i);

    }
    int borrow = cost-n;
    if(borrow>0) cout<<borrow<<"\n";
    else cout<<"0\n";


    return 0;
}
