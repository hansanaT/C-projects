#include <stdio.h>

int main(void)
{
    int N1,N2;

    printf("Enter number 1 : ");
    scanf("%d",&N1);


    printf("Enter number 2 : ");
    scanf("%d",&N2);

    if(N1!= N2)
    {
        if(N1 > N2)
            printf("Entered numbers are %d and %d \n Number 1 is greater than Number 2",N1,N2);
        else
            printf("Entered numbers are %d and %d \n Number 2 is greater than Number 1",N1,N2);
    }
    else
    {
        printf("Entered numbers are %d and %d \n They are equal",N1,N2);
    }

}
