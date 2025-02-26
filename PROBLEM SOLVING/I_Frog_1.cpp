#include<bits/stdc++.h>
using namespace std;
int min_cost(int i,int h[],int N){
if(i==N-1) return 0;
if(i==N-2) return abs(h[i]-h[i+1]);

int cost_jump_1=abs(h[i]-h[i+1])+min_cost(i+1,h,N);
int cost_jump_2=abs(h[i]-h[i+2])+min_cost(i+2,h,N);
return min(cost_jump_1,cost_jump_2);

}
int main(){
    int N;
    cin>>N;
    int h[N];
    for(int i=0;i<N;i++){
        cin>>h[i];
    }
    int result=min_cost(0,h,N);
    cout<<result<<endl;
}