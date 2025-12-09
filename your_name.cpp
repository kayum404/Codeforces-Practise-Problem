#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag =false;
        int n;
        cin>>n;
        int t[n];
        for(int i=0; i<n; i++)
        {
            cin>>t[i];
        }
        for(int i=0; i<1; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(t[i]%2==0)
                {
                    if(t[j]%2!=0)
                    {
                        flag=true;
                        break;
                    }
                }
                else
                {
                    if(t[j]%2==0)
                    {
                        flag=true;
                        break;
                    }
                }

            }

        }
        if(flag==true)
        {
            sort(t,t+n);
        }
        for(int i=0; i<n; i++)
        {
            cout<<t[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

