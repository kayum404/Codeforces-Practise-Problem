#include<bits/stdc++.h>
using namespace std;

int main(){
    int friends_house;
    cin>>friends_house;

    int step= friends_house/5;
    if(friends_house%5!=0) step++;

    cout<<step<<"\n";

    return 0;
}


