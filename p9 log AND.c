#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    if (N>=10&&N<=50) {
        printf("YES",N);
    }
    else {
        printf("NO",N);
    }
    return 0;
}