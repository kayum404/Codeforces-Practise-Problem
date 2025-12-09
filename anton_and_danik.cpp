#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int cntA=0;
    int cntD=0;
    cin>>n;

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') cntA++;
        else cntD++;
    }
    if(cntA>cntD) cout<<"Anton\n";
    else if(cntA==cntD) cout<<"Friendship\n";
    else cout<<"Danik\n";
    return 0;
}
