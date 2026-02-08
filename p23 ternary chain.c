#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    if (N>0) {
        printf("POSITIVE",N);
    }
    else if (N < 0) {
        printf("NEGATIVE",N);
    }
    else {
        printf("ZERO");
    }
    return 0;


}