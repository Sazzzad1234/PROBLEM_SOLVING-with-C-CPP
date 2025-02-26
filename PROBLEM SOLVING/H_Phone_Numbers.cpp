#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
    int n,count=0;
        cin>>n;
        string arr;
        cin>>arr;
        for(int i=0;i<n;i++){
             if(arr[i]=='8'){
                count++;
            }
        }
        int p=n/11;
        if(count<=p){
            cout<<count<<endl;
        }
        else{
            cout<<p<<endl;
        }

    return 0;
}