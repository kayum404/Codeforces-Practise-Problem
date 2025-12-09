
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        bool even =false , odd=false;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) even=true;
            else odd=true;
        }

        if(even and odd) {
            sort(a,a+n);
        }
        for(int j=0;j<n;j++){
            cout<<a[j] <<" \n"[j==n-1];
        }
    }
    return 0;
}
