#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x;cin>>x;

    int maxTank =INT_MIN;
    int tank=0;

        int a0;
        cin>>a0;
        tank = a0-tank;
        if(tank>maxTank) maxTank=tank;
            tank=a0;

        for(int i=1;i<n;i++){
            int a;
            cin>>a;
            tank= a-tank;
            if(tank>maxTank) maxTank=tank;
            tank=a;
        }

        tank = (x-tank)*2;
        if(tank>maxTank) maxTank=tank;

        cout<<maxTank<<endl;

    }

    return 0;
}


