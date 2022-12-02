#include <stdio.h>

int main()
{
    int mark;

    printf("Enter mark \n");
    scanf("%d",&mark);

    if(mark>=80)
    {
        printf("Grade - A");
    }
    else if(mark>=50)
    {
        printf("Grade - B");
    }
    else if(mark>=40)
    {
        printf("Grade - C");
    }
    else
    {
        printf("Grade - D");
    }

    return 0;
}
