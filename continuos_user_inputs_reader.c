#include <stdio.h>

void main()
{
    int num,sum = 0,i = 1;
    float avg;

    printf("Enter Number : ");
    scanf("%d",&num);

    sum = sum + num;


    while(num != -99)
    {
        sum = sum + num;
        printf("Enter Number : ");
        scanf("%d",&num);
        i++;
    }

    printf("Total : %d \n",sum);

    avg = sum / i;

    printf("Average : %.2f \n",avg);
}
