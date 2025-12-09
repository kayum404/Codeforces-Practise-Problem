
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    int t;
    cin>>t;
    while(t--){
    bool flag =false;
    int n;
    cin>>n;
    string name1,name2;

            cin>>name1>>name2;
            for(int i=0;i<n;i++){
            if(flag==true) flag=false;
                for(int j=0;j<n-i;j++){
                    if(name2[i]==name1[j]){
                        name1.erase(j,1);
                        flag=true;
                        break;
                    }

                }
                if(flag==false) {
                    cout<<"NO\n";
                    break;
                }
            }
        if(flag==true) cout<<"YES\n";
    }

    return 0;
}

