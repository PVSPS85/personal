#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,d,real,img;
    printf("please enter the coefficients a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b - 4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("they are real roots\n");
        printf("root1 = .%.2f and root2 = .%.2f\n",root1,root2);
    }
    else if(d==0)
    {
        root1 = (-b)/(2*a);
        root2=root1;
        printf("real and equal roots \n");
        printf("root1 = .%.2f and root2 = .%.2f\n",root1,root2);

    }
    else
    {
        real=(-b)/(2*a);
        img=(sqrt(-d)/(2*a));
        printf("the roots are imaginary\n");
        printf("root1 = .%.2f + .%.2fi\n",real,img);
        printf("root2 = .%.2f - .%.2fi\n",real,img);

    }
    return 0;
}
