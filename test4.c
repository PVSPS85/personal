#include <stdio.h>


int sum()
{
    int sum = 0,i,n,x;
    printf("enter the number of repeatation\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the number");
        scanf("%d",&x);
        sum= sum+x;
    }
    printf("the sum is %d",sum);
}
int mult()
{
    int mult = 1,i,n,x;
     printf("enter the number of repeatation\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the number");
        scanf("%d",&x);
        mult=mult*x;
    }
    printf("themult is %d",mult);
}
float div()
{
     
    int div,i,n,x;
     printf("enter the number of repeatation\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the number");
        scanf("%d",&x);
        div = div/x;
    }
    printf("the div is%d",div);
}
int main(void)
{
    int ch,x;
    printf("1.sum\n");
    printf("2.mult\n");
    printf("3.div\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    
    {
        case 1:
            sum();
            break;
        case 2:
            mult();
            break;
        case 3:
            div();
            break;
        default :
            printf("not possiable");
            break;
    }
    
}