#include <stdio.h>
int main() {
    int A,B;
    printf("Enter any number");
    scanf("%d %d",&A,&B);
    if (A==B) {
        printf("Equal");
    }
    else {
        printf("Not equal");
    }
    return 0;
}