#include <iostream>
#include <string>
using namespace std;
int main() {

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            int lenght = s.length();
            if(lenght>10){

                    cout<<s[0]<<lenght-2<<s[lenght-1]<<endl;
            } else cout<<s<<endl;

        }

    return 0;
}
