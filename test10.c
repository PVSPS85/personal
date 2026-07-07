#include<stdio.h>
int main()
{
    int n,org,digit,rev=0;

    printf("enter the digit now : \n");
    scanf("%i",&n);

    org = n;
    while(n>0)
    {
        digit = n%10;
        rev = rev*10+digit;
        n=n/10;

    }
    
    if(org==rev)
    {
        printf("it is a palindrome number ");

    }
    else 
    {
        printf("it is not a palindrome number ");

    }

    return 0;
}
