#include <stdio.h>
#include <math.h>

void main()
{
    int i=1;
    int N1;

    prinf("Enter Number : ");
    scanf("%d",N1);

    while(i < N1)
    {
        printf("l%f \n",pow(i,3));
    }
}
