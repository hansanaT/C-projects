#include <stdio.h>
#include <math.h>

int main()
{

float up1,up2,up3,up4,up5,sub_total,Final_Bill_Amount,discount;

int qt1,qt2,qt3,qt4,qt5;

printf("Enter unit price of Item 1 : ");
scanf("%f",&up1);
printf("Enter the quantity(Nos) of Item 1 : ");
scanf("%d",&qt1);

printf("Enter unit price of Item 2 : ");
scanf("%f",&up2);
printf("Enter the quantity(Nos) of Item 2 : ");
scanf("%d",&qt2);

printf("Enter unit price of Item 3 : ");
scanf("%f",&up3);
printf("Enter the quantity(Nos) of Item 3 : ");
scanf("%d",&qt3);

printf("Enter unit price of Item 4 : ");
scanf("%f",&up4);
printf("Enter the quantity(Nos) of Item 4 : ");
scanf("%d",&qt4);

printf("Enter unit price of Item 5 : ");
scanf("%f",&up5);
printf("Enter the quantity(Nos) of Item 5 : ");
scanf("%d",&qt5);

sub_total=(up1*qt1)+(up2*qt2)+(up3*qt3)+(up4*qt4)+(up5*qt5);

if(sub_total >= 10000)
{
    printf("Sub Total(LKR) : %.2f \n",sub_total);

    discount=(sub_total*6)/100;

    printf("Discount : %.2f \n",discount);

    Final_Bill_Amount = sub_total - discount;

    printf("Final Bill Amount(LKR) : %.2f",Final_Bill_Amount);
}
else
{
    printf("Total Amount(LKR) : %.2f",sub_total);
}

return 0;
}
