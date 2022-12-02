#include <stdio.h>

void main()
/*{
    for(int i = 10; i <= 35; i = i + 5)
    {
        printf("%d \n",i);
    }
}*/

/*{
    int i = 10;
    do
    {
        printf("%d \n",i);
    }while((i = i + 5) <= 35);
}*/

{
    int i = 5;
    while((i = i + 5) <= 35)
    {
        printf("%d \n",i);
    }
}
