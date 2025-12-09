#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin>>testCase;

    while(testCase--){
        int operation=0;
        int sizeofArray;
        cin>>sizeofArray;
        int array1[sizeofArray];
        for(int index=0; index<sizeofArray;index++){
            cin>>array1[index];
        }

        //check 0 and icrease them +1
         for(int j=0; j<sizeofArray;j++){
            if(array1[j]==0) {
                array1[j]=1;
                operation++;
            }
        }
            int product1 = 1;
        for(int p=0;p<sizeofArray;p++){

            product1 *= array1[p];
        }
            // check positive or not
            if(product1==1) {
                cout<<operation<<"\n";
            }
            else {
            //check -1

                for(int k=0;k<sizeofArray;k++){
                        int product2 =1;
                        if(array1[k]==-1) {
                            array1[k]=1;
                            operation+=2;
                            for(int l=0;l<sizeofArray;l++){
                                product2*=array1[l];
                            }
                            if(product2==1) {
                                    cout<<operation<<"\n";
                                    break;
                                }
                        }

                }

            }
    }



    return 0;
}
