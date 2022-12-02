#include <stdio.h>

void main()
{
    int N1;

    printf("Enter number : ");
    scanf("d",&N1);

    if(N1 % 3 == 0 && N1 % 5 == 0)
    {
        printf("Fizz-Buzz");
    }
    else if(N1 % 3 == 0)
    {
        printf("Fizz");
    }
    else if(N1 % 5 == 0)
    {
        printf("Buzz");
    }
    else
    {
        printf("%d",N1);
    }
}
