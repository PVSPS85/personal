#include<stdio.h>
#include<math.h>

int main(){
    int n,i ;
    double sum= 0,mean , variance = 0,stddev;

    printf("enter number of parts :");
    scanf("%d",&n);
    double arr[n];
    printf("enter %d parts length :", n);
    for(i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }

    double *ptr = arr;
    for(i=0;i<n;i++){
        sum+=*(ptr + i);

    }
    mean = sum/n;

    for(i=0;i<n;i++){
        variance+=pow( *(ptr+i) - mean ,2);

    }
    variance /= n;

    stddev = sqrt(variance);

    printf("sum = %.2f\n",sum);
    printf("mean = %.2f\n",mean);
    printf("standard deaviation = %.2f \n ",stddev);

    return 0;
}