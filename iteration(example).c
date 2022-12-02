#include <stdio.h>

void main()
{
    int N1,max,min,total = 0;
    float avg;

    printf("Enter Number : ");
    scanf("%d",&N1);
    max = N1;
    min = N1;

    total = total + N1;

    for(int i = 1; i < 4; i++)
    {
        printf("Enter Number : ");
        scanf("%d",&N1);

        if(N1 > max)
        {
            max = N1;
        }
        if(N1 < min)
        {
            min = N1;
        }

        total = total + N1;

    }

    avg = (float)total / 5;
    printf("Min : %d \n",min);
    printf("Max : %d \n",max);
    printf("Total : %d \n",total);
    printf("Average : %.2f \n",avg);
}
