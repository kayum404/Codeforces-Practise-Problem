#include<bits/stdc++.h>
using namespace std;

int main(){
    int friends_house;
    int stepcount=0;
    cin>>friends_house;

    vector <int> step_l = {5,4,3,2,1};
    int i=0;
    while(friends_house!=0){

        if(friends_house>=step_l[i]){
            friends_house-=step_l[i];
            stepcount++;
        }
        if(friends_house<step_l[i]) ++i;
    }
    cout<<stepcount<<"\n";

    return 0;
}

