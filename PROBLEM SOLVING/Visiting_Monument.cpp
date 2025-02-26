#include<stdio.h>
int main(){
    int T,N,i,t;
    scanf("%d",&T);
    for(t=1;t<=T;t++){
        scanf("%d",&N);
         for(i=1;i<=N;i++){
            printf("%d ",i);
        }
        for(i=N-1;i>=1;i--){
            printf("%d ",i);
        }
        printf("\n");
       
    }
    
}