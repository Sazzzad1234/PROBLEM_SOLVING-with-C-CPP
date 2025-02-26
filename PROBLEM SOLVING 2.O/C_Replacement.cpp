#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }   
    for(int i=0;i<n;i++){
        if(v[i]<0 ){
            v[i]=2;
        }
        else if(v[i]== 0){
            v[i]=v[i];
        }
        else{
            v[i]=1;
        }
    }  
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}