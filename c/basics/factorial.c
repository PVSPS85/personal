#include<stdio.h>

long long factorial(int x)
{
    if(x == 0 || x == 1)
        return 1;
    else
        return x*factorial(x-1);
}

int main()
{
    int n;
    printf("enter the number you want n : \n");
    scanf("%i",&n);

    if(n<0)
    {
        printf("we can't find facotrial for negative integer");
    }
    else{
        printf("factorial of the number %d : %lld  ",n,factorial(n));
    }
}