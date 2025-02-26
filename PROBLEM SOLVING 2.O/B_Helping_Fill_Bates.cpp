#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,W;
    cin>>N>>W;
    vector<pair<int,int>>items(N);
    for(int i=0;i<N;++i){
        cin>>items[i].first>>items[i].second;
    }
    vector<long long> dp(W+1,0);
    for(int i=0;i<N;++i){
        int weight=items[i].first;
        int value = items[i].second;
        for(int W=W;W>=weight;W--){
            dp[W]=max(dp[W],dp[W - weight]+value);
        }
    }
    cout<<dp[W]<<endl;

}
