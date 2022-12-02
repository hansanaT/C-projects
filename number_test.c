#include <stdio.h>

int main()
{
    int N1,N2;

    printf("Enter number 1 : \n");
    scanf("%d",&N1);
    printf("Enter number 2 : \n");
    scanf("%d",&N2);

    if(N1==N2)
    {
        printf("%d is equal to %d \n The 2 numbers are same",N1,N2);
    }
    if(N1 != N2)
    {
        printf("The 2 numbers aren't the same");
    }
    else
    {
        printf("Invalid operation");
    }
    return 0;
}
