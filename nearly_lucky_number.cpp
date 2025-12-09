#include<bits/stdc++.h>
using namespace std;

bool itstrue(long long cnt)
{
    if(cnt==0) return false;
    while(cnt>0)
    {
        int digit = cnt%10;
        if(digit!=4 && digit!=7 ) return false;
        cnt/=10;
    }
    return true;
}

int main()
{
    long long n;
    int c=0;
    cin>>n;
    while(n>0)
    {
        int digit = n%10;
        if(digit==4 || digit==7 )
        {
            c++;
        }
        n/=10;
    }
    if(itstrue(c)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
