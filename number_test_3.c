#include <stdio.h>

void main()
{
    int N1,N2,N3;

    printf("Enter number 1 : ");
    scanf("%d",&N1);

    printf("Enter number 2 : ");
    scanf("%d",&N2);

    printf("Enter number 3 : ");
    scanf("%d",&N3);

    if(N1==N2 && N2==N3 && N3==N1)
    {
        printf("Entered numbers are %d , %d and %d \n All numbers are equal",N1,N2,N3);
    }
    else if(N1 > N2 > N3)
    {
        printf("Number 1 is greatest");
    }
    else if(N2 > N3)
    {
        printf("Number 2 is the greatest");
    }
    else
    {
        printf("Number 3 is the greatest");
    }
}
