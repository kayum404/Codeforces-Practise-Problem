#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

   while(t--){
    bool flag=false;
    for(int i=0;i<8;i++){
        string color(8,' ');
        for(int j=0;j<8;j++){
            cin>>color[j];
        }
        if(flag==false){
        if(color[0]=='R'){
            for(int k=0;k<8;k++){
                if(color[k]=='R'){
                    flag=true;

                } else {
                    flag=false;
                    break;
                }

            }

           }
        }
    }
     if(flag==true){
            cout<<"R\n";
        }
        else cout<<"B\n";
   }

    return 0;
}
