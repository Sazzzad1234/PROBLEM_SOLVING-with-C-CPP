#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
         int n,count=0;
         cin>>n;
         int x;
         for(int i=0;i<n;i++){
            cin>>x;
            if(x==1){
                count++;
            }
         }
         if(count>=1){
            cout<<"HARD"<<endl;
         }
         else{
            cout<<"EASY"<<endl;
         }

    return 0;
}