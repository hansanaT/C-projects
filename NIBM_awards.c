#include <stdio.h>

int main()
{
    int ICS_marks,MC_marks,PF_marks;

    printf("Enter your ICS Marks : "); //printf("Enter ICS,PF and MC marks \n");
    scanf("%d",&ICS_marks);          //scanf("%d %d %d",&ICS_marks,&PF_marks,&MC_marks);

    printf("Enter your PF Marks : ");
    scanf("%d",&PF_marks);

    printf("Enter your ICS Marks : ");
    scanf("%d",&MC_marks);

    if(ICS_marks>=95 && PF_marks>=95)
    {
        printf("Your ICS and PF marks are respectively %d and %d \n",ICS_marks,PF_marks);
        printf("You have been awarded GOLD for ICS and PF");
    }
    if(ICS_marks>=95 || MC_marks>=95)
    {
        printf("Your ICS and MC marks are respectively %d and %d \n",ICS_marks,MC_marks);
        printf("You have been awarded GOLD for ICS and MC");
    }
    else
    {
        printf("No AWARD available");
    }

    return 0;
}
