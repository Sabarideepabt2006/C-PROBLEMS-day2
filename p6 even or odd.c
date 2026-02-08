#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    if (N%2==0) {
        printf("%d EVEN",N);
    }
    else {
        printf("%d ODD",N);
    }
    return 0;
}