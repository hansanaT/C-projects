#include <stdio.h>

int main()
{
    int BSL;

    printf("Enter your Blood Sugar Level : ");
    scanf("%d",&BSL);

    if(BSL>180)
    {
        printf("Blood Sugar Level is %d \n",BSL);
        printf("High 1 \n");
    }
    else if(BSL>120)
    {
                printf("Blood Sugar Level is %d \n",BSL);
        printf("High 2 \n");
    }
    else if(BSL>80)
    {
                printf("Blood Sugar Level is %d \n",BSL);
        printf("Normal \n");
    }
    else if(BSL<80)
    {
                printf("Blood Sugar Level is %d \n",BSL);
        printf("Low \n");
    }
    else
    {
                printf("Blood Sugar Level is %d \n",BSL);
        printf("Please enter your Blood Sugar Level \n");
    }

    return 0;
}
