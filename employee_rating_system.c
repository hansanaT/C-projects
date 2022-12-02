#include <stdio.h>

int main()
{
    int years_of_service,csr;

    printf("Welcome to ABC rating services \n");

    printf("Please enter your Years of Service at ABC and Customer Satisfaction Rate to continue \n");
    scanf("%d %d",&years_of_service,&csr);

    if(years_of_service >= 10 && csr >= 75)
    {
        printf("Your Years of Service and Customer Satisfaction Rate are %d and %d respectively \n You have been rated : A",years_of_service,csr);
    }

    else if(years_of_service >= 10 && csr <= 75)
    {
        printf("Your Years of Service and Customer Satisfaction Rate are %d and %d respectively \n You have been rated : B",years_of_service,csr);
    }

    else if(years_of_service <= 10 && csr >= 75)
    {
        printf("Your Years of Service and Customer Satisfaction Rate are %d and %d respectively \n You have been rated : C",years_of_service,csr);
    }

    else if(years_of_service <= 10 && csr <= 75)
    {
        printf("Your Years of Service and Customer Satisfaction Rate are %d and %d respectively \n You have been rated : D",years_of_service,csr);
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}
