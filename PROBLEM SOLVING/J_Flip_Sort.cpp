#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
    int N;
    while(cin>>N){
        int arr[1000];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
int p=0;
bool swapped;
for(int i=0;i<N-1;i++){
swapped = false;
for(int j=0;j<N-i-1;j++){
    if(arr[j]>arr[j+1]){
        int temp =arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        p++;
        swapped = true;
    }
}
if(!swapped) break;
}
cout<<p<<endl;
    }   
    return 0;
}