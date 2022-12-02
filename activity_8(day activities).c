#include <stdio.h>

int main(void)
{
    int N1,i = 0;
    float avg,sum = 0;

    printf("Enter Number(Enter 9999 to exit) : ");
    scanf("%d",&N1);

    while(N1 != 9999)
    {
        sum = sum + N1;

        printf("Enter Number(Enter 9999 to exit) : ");
        scanf("%d",&N1);
        i++;

    }

    avg = sum / i;

    printf("Average of entered numbers is : %.2f",avg);
}
