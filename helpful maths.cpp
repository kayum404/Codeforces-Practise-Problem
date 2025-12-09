#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sizeofS =s.size();
    for(int i=0;i<sizeofS;i++){
        if(s[i]=='+') {
            s.erase(i,1);
            i--;
        }
    }
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<"+\n"[i==s.size()-1];
    }
    return 0;
}
