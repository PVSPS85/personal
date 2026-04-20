#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c;
    float dis,real,imag,root1,root2;
    printf("enter the coeffcients a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    dis = b*b - 4*a*c;
    if (dis>0)
    {
        // roots are different
        root1=(-b+sqrt(dis))/(2*a);
        root2=(-b-sqrt(dis))/(2*a);
        printf("the roots are the root1 %.2f and the root2 %.2f",root1,root2);
    }
    else if (dis ==0)
    {
        // roots are equal
        root1=root2=-b/(2*a);
        printf("roots are equal then root1 and root2 are %.2f",root1);

    }
    else
    {
        real=-b/(2*a);
        imag=sqrt(dis)/(2*a);
        printf("root1 = %.2f + %.2f",real,imag);
        printf("root2 = %.2f - %.2f",real,imag);
    }
}