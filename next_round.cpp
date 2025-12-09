#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n-1];
    int result=0;
    if(n>=k){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cutoff=a[k-1];
        for(int j=0;j<n;j++){
            if(a[j]>0 && a[j]>=cutoff) result++;
        }
    }
    cout<<result;
    return 0;
}
