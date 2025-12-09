#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        double avg;
        int n;
        cin>>n;
        vector<int> array1(n);
        for(int index=0; index<n; index++){
            cin>>array1[index];

    }
    int result = *max_element(array1.begin(),array1.end());
     cout<<result<<"\n";
     }

return 0;
}
