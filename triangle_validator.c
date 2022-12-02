#include <stdio.h>

void main()
{
    float a,b,c;

    printf("Enter side 1st side length :  \n");
    scanf("%d",&a);

    printf("Enter 2nd side length : \n");
    scanf("%d",&b);

    printf("Enter 3rd side length : \n");
    scanf("%d",&c);

    if(a+b > c && a+c > b && b+c > a)
    {
        printf("Valid Triagle");
    }
    else
    {
        printf("Invalid Triangle");
    }
}
