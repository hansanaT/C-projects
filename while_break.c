#include <stdio.h>

void main()
{
    int x = 1;

    while(x <= 10)
    {
        if(x == 5)
        {
            break;
        }
        printf("%d \n",x);
        ++x;
    }
}
