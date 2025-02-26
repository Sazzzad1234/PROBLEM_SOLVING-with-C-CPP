#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    long long int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    long long int ps=0;
    for(int i=0;i<N;i++){
        ps=ps+A[i];
        A[i]=ps;
        
    }
    for(int i=N-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
}