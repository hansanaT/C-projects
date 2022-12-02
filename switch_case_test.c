#include <stdio.h>

int main()
{
    int score;

    printf("Input score : ");
    scanf("%d",&score);

    switch(score)
    {
    case 3:
        printf("Congratulations!\nYou are a GOLD Winner");
        break;
    case 2:
        printf("Silver Winner");
        break;
    case 1:
        printf("Bronze Winner");
        break;
    default:
        printf("Invalid Input");
    }

    return 0;
}
