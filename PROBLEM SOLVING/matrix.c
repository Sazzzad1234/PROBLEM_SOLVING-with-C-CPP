#include <stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for ( i =0;i<N;i++){
        for ( j =0;j<N;j++){
            int value;
            scanf("%d",&value);
            if ((i==j && value !=1)||(i !=j && value !=0)){
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}
