#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    map<string,string>ip;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        s2+=";";
        ip[s2]=s1;
    }

    for(int i=0;i<m;i++){
        string s1,s2;
        cin>>s1>>s2;
        if(ip.count(s2)==1){
            cout<<s1<<" "<<s2<<" "<<"#"<<ip[s2]<<endl;
        }
    }

    return 0;
}