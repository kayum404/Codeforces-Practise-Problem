#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <vector<int>> matrix(5,vector<int>(5));
    int result;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]==1){
                result=(abs(2-i))+(abs(2-j));

            }
        }
        }
        cout<<result<<"\n";

    return 0;
}
