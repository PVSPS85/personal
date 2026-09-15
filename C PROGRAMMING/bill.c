#include<stdio.h>
int main()
{
    char name[50];
    float units;
    float bill , surcharge = 0;

    printf("enter the customer name: \n");
    scanf("%s",name);
    printf("enter the number of units bro: \n ");
    scanf("%f",&units);
    if(units <=200)
    {
        bill = units*0.80;

    }
    else if(units <=300)
    {
        bill = (200*0.80) + (units-200)*0.90;
    }
    else
    {
        bill = (200*0.80) + (100 * 0.90 ) + (units -300)*1.00;
    }
    
    if(bill > 400)
    {
        surcharge = 0.15 * bill;

    }

    bill = bill + surcharge + 100;
    printf("couster name : %s \n",name);
    printf("the total billl is : %.2f \n",bill);

    return 0 ;
}