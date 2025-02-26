#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
int N;
for(int i=0;i<T;i++){
    cin>>N;
   int A[N];
   int count=0;
    for(int i=0;i<N;i++){
cin>>A[i];
    }
    for(int i=0;i<N-1;i++){
        if(A[i]<=A[i+1]){
            count++;
        }
    }
    if(N==count+1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
       
    return 0;
}