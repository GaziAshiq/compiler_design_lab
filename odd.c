#include <stdio.h>

int main(void){
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<n; i+=2){
        printf("%d is odd number\n", i);
        sum+=i;
    }
    printf("The sum of all odd number: %d\n", sum);
}