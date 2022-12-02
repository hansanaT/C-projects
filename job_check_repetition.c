#include <stdio.h>

void main()
{
    for(int i = 1; i <= 200; i++)
    {
        int age;
        printf("Enter age : ");
        scanf("%d",&age);

        if(age < 18)
        {
            printf("You are a minor \n Can't work \n");
        }
        else if(age >= 18 && age <= 60)
        {
            printf("You can apply for a job \n");
        }
        else
        {
            printf("You are too OLD to work as per the government \n");
        }
    }
}
