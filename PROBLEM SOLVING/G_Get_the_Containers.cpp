#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,sum=0;
    cin>>T;
    for(int i=1;i<=T;i++){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int k=1;k<=n;k++){
            cin>>arr[k];
        }
        for(int k=1;k<=m;k++){
            sum=sum+arr[k];
        }
          cout<<"Case "<<i<<": "<<sum<<endl;
          sum=0;
    }
}