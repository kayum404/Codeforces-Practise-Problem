#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    int maxCapacity=INT_MIN;
    int result=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        result -=a;
        result+=b;
        if(maxCapacity<result) maxCapacity=result;
    }
    cout<<maxCapacity<<endl;

    return 0;
}
