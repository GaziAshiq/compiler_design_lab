#include <stdio.h>

int main(void){
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if (i==1) printf("1");
        else printf(" ");
        for(j=2; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}