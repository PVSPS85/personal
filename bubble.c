#include<stdio.h>

int main()
{
    int n,i,j,temp;

    printf("enter the number of transaction : \n");
    scanf("%i",&n);
    int arr[n];
    printf("enter the tractions now ");
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("the sorted elements are ");
    for(i=0;i<n;i++)
    {
        printf(" %i ",arr[i]);
    }

    printf("\n");

    return 0;
}