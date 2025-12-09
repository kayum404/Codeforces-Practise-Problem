#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector <string> gride(8);
        for(int i=0;i<8;i++){
            cin>>gride[i];
        }


        bool flag=false;
        for(int i=0;i<8;i++){
            if(gride[i]=="RRRRRRRR"){
                flag=true;
                break;
            }
        }

        if(flag==true) {
            cout<<"R\n";
        }
        else cout<<"B\n";

    }

    return 0;
}
