#include <stdio.h>

void main()
{
    int i = 0,marks;
    float sum,avg;

    printf("Enter marks : ");
    scanf("%d",&marks);

    while(marks != -99)
    {
        sum = sum + marks;
        printf("Enter marks : ");
        scanf("%d",&marks);
        i++;
    }

    printf("Sum of marks are : %.2f \n",sum);
    avg = sum / i;
    printf("Average is : %.2f",avg);
}
