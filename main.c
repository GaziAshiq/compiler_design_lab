#include <stdio.h>

/***
int main(void)
{
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
                printf("%d is Leap Year\n", year);
    }
    else
        printf("%d Not a Leap Year\n", year);
}
***/

int main(void){
    int i, j;
    for (i=0; i<=5; i++){
        for(j=0; j<=5; j++){
            printf("*");
        }
        printf("\n");
    }
}