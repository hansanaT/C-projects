#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    /*srand(time(NULL));
    printf("%d \n",rand()%100);
    printf("%d \n",rand()%100);*/

    srand(time(NULL));

    int i = 0;

    while( i <= 10)
    {
        printf("%d \n",rand()%100);
        i++;
    }


}
