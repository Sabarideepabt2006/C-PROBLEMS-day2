#include <stdio.h>
int main () {
    int N,M,K;
    scanf("%d %d",&N,&M);
    K=N^(1<<M);
    printf("%d",K);
    return 0;

}