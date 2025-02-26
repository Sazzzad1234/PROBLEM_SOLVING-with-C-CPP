#include <stdio.h>
int main(){
    int N,M,i,j;
    scanf("%d %d",&N,&M);
    int Max[N][M];
    if (N!=M) {
        printf("NO\n");
        return 0;
    }
    for (i=0;i<N;i++){
        for (j=0;j<M;j++){
            scanf("%d",&Max[i][j]);
            if ((i==j || i+j==N - 1)){
                if(Max[i][j]!=1) {
                    printf("NO\n");
                   return 0;
                }
            }
             else{
                if(Max[i][j]!=0){
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");
    return 0;
}
