#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    sort(name.begin(), name.end());

    int duplicateCount = 0;
    for(int i = 0; i < name.size() - 1; i++)
    {
        if(name[i] == name[i+1])
        {
            duplicateCount++;
        }
    }

    int uniqueCount = name.size() - duplicateCount;

    if(uniqueCount % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";

    return 0;
}
