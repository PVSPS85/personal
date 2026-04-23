#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    while(true)
    {
        int n, org, rev = 0, digit;

        printf("enter the number: ");
        scanf("%d", &n);

        org = n;

        while(n > 0)
        {
            digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        if(rev == org)
            printf("it is a palindrome\n");
        else
            printf("it is not palindrome\n");
    }

    return 0;  // ✅ OUTSIDE loop
}