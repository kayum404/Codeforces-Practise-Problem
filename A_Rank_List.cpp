#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool comp(const pair<int,int> &a , const pair<int ,int> &b){
    if(a.first!=b.first) return a.first>b.first;
    return a.second<b.second;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<pair<int ,int>> vec;
    map<pair<int,int>,int> cnt;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
        cnt[{a,b}]++;
    }

    sort(vec.begin(),vec.end(),comp);
    
    int sizemap=cnt[{vec[k-1].first,vec[k-1].second}];
    cout<<sizemap<<endl;
    return 0;
}