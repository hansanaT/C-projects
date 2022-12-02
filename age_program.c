#include <stdio.h>

int main()
{
    int age;

    printf("Enter age \n");
    scanf("%d",&age);

    if(age>18)
        printf("Age is above 18");

        else
            printf("Age is below 18");

    return 0;
}
