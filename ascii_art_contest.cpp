#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    for(int i=0;i<3;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    int maximum= *max_element(vec.begin(),vec.end());
    int minimum= *min_element(vec.begin(),vec.end());

    int diff = maximum - minimum;

    if(diff>=10) cout << "check again\n";
    else {
        sort(vec.begin(),vec.end());
        cout<<"final "<<vec[1]<<endl;
    }

    return 0;
}
