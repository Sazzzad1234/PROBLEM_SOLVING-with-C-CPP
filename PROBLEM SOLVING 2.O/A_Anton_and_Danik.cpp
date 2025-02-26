#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
        int n,an=0,da=0;
        cin>>n;
         string X;
            cin>>X;
         for(int i=0;i<n;i++){
            if(X[i]=='A'){
an++;
            }
            else{
                da++;
            }
         }
         if(an>da){
            cout<<"Anton"<<endl;
         }
         else if(da>an){
            cout<<"Danik"<<endl;

         }
         else{
            cout<<"Friendship"<<endl;
         }

    return 0;
}