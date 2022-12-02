#include <stdio.h>

int main()
{
    int mark;

    /* printf("Enter mark \n");
    scanf("%d \n",&mark);

    if(mark>=60)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }

    return 0;*/





    printf("Enter mark \n");
    scanf("%d",&mark);

    mark >= 60 ? printf("Passed \n") : printf("Failed \n");

    return 0;
}
