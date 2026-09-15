#include<stdio.h>
int main()
{
    int m1,n1,m2,n2,i,j,k;

    printf("enter the dimensions for 1st matrix\n");
    scanf("%d %d",&m1,&n1);

    int a[m1][n1];
    printf("matrix elements \n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            scanf("%i",&a[i][j]);
        }
    }

    printf("enter the dimensions for 2nd matrix\n");
    scanf("%d %d",&m2,&n2);

    int b[m2][n2];

    printf("enter the elements\n");
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            scanf("%i",&b[i][j]);
        }
    }

    if(n1!= m2){
        printf("matrix multiplecation not possiable");
        return 0 ; 

    }

    int C[m1][n2];
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            C[i][j]=0;
        }
    }

    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            for(k=0;k<n1;k++){
                C[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("the resulatant matrixx \n ");
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",C[i][j]);

        }
        printf("\n");
    }
    return 0;


}