#include <stdio.h>

int main()
{
    int age;
    float m_income;

    printf("Enter your monthly income : ");
    scanf("%f",&m_income);

    printf("Enter your age : ");
    scanf("%d",&age);

    if(age >= 18 && m_income >= 50000)
    {
        printf("You are eligible for a Loan");
    }
    else
    {
        printf("You are mot eligible for a Loan");
    }

    return 0;
}
