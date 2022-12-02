#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d",&age);

    if(age<18)
    {
        printf("You are a minor \n Can't Work");
    }
    /*else if(age>=18 && age<=60)
    {
        printf("You can apply for a job");
    }
    else
    {
        printf("Too old to work as per the Government");
    }*/

    else
    {
        if(age>=18 && age<=60)
        {
            printf("You can't work \n");
        }
        else
        {
            printf("You are too old to work \n");
        }
    }



    return 0;
}
