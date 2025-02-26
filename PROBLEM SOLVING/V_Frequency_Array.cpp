#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
         int N,M,count[10001]={0};
         cin>>N>>M;
         int num;
         for(int i=0;i<N;i++){
            cin>>num;
            count[num]++;
         }
         for(int i=1;i<=M;i++){
        
            cout<<count[i]<<endl;

         }
    return 0;
}