#include <stdio.h>

int main(void){
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("1");
        for(j=2; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}