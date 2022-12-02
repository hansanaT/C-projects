#include <stdio.h>

void main()
{
    int marks,sum = 0;
    printf("Enter marks (type -99 to exit) : ");
    scanf("%d",&marks);

    while(marks != -99)
    {
        sum = sum + marks;

        printf("Enter marks (type -99 to exit) : ");
        scanf("%d",&marks);

    }

        printf("Total of marks : %d",sum);
}
