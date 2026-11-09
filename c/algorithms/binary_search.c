#include<stdio.h>
int main()
{
    int n,key,mid,low,high,found=-1,i;

    printf("enter the number of books : ");
    scanf("%i",&n);

    int arr[n];

    
    printf("enter the number in sorted order");
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }

    printf("enter the key you want to find ");
    scanf("%i",&key);
    low = 0;
    high = n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            found = mid;
            break ;

        }
        else if (arr[mid] < key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }

    if(found!=-1)
    {
        printf("the number is found in the position %i   ",found + 1);
    }
    else{
        printf("the number not found");
    }

    return 0;
    
}