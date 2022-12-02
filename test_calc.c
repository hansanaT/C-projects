#include <stdio.h>

int main()
{
    int N1;
    int N2,SUM,SUB,DIV,MUL;
    char operater;

    printf("Enter Number 1 \n");
    scanf("%d",&N1);

    printf("Enter Number 2 \n");
    scanf("%d",&N2);

    printf("Enter operator \n");
    scanf(" %c",&operater);

    if(operater == '+')
    {
        SUM = N1+N2;
        printf("%d",SUM);
    }

    else if(operater == '-')
    {
        SUB = N1-N2;
        printf("%d",SUB);
    }

    else if(operater == '*')
    {
        MUL = N1*N2;
        printf("%d",MUL);
    }

    else if(operater == '/')
    {
        DIV = N1/N2;
        printf("%d",DIV);
    }

    return 0;
}
