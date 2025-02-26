#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
    int n,temp=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   

    return 0;
}