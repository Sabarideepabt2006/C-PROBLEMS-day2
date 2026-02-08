#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    if ((N>0)&&((N&(N-1))==0)){
    printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}