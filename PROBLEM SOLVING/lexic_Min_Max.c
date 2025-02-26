#include <stdio.h>
#include <string.h>
int main() {
    char S1[1001], S2[1001], S3[1001],min[1001],max[1001];
    scanf("%s %s %s",&S1,&S2,&S3);
    strcpy(min,S1);
    strcpy(max,S1);
    if (strcmp(S2, min)<0)
     {
        strcpy(min, S2);
    }
    if (strcmp(S3,min)<0)
     {
        strcpy(min,S3);
    }
    if (strcmp(S2,max)>0)
     {
        strcpy(max,S2);
    }
    if (strcmp(S3,max) > 0) 
    {
        strcpy(max,S3);
    }
    printf("%s\n", min); 
    printf("%s\n", max);
    return 0;
}
