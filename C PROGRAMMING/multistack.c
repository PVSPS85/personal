#include <stdio.h>

#define MAX 10

int arr[MAX];

int top1 = -1;
int top2 = MAX;

void push1(int value)
{
    if (top1 + 1 == top2)
    {
        printf("Overflow\n");
    }
    else
    {
        arr[++top1] = value;
    }
}

void push2(int value)
{
    if (top1 + 1 == top2)
    {
        printf("Overflow\n");
    }
    else
    {
        arr[--top2] = value;
    }
}

void pop1()
{
    if (top1 == -1)
    {
        printf("Stack 1 Underflow\n");
    }
    else
    {
        printf("Popped from Stack 1 = %d\n", arr[top1--]);
    }
}

void pop2()
{
    if (top2 == MAX)
    {
        printf("Stack 2 Underflow\n");
    }
    else
    {
        printf("Popped from Stack 2 = %d\n", arr[top2++]);
    }
}

void display1()
{
    int i;

    printf("Stack 1: ");

    for (i = top1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void display2()
{
    int i;

    printf("Stack 2: ");

    for (i = top2; i < MAX; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    push1(10);
    push1(20);

    push2(100);
    push2(200);

    display1();
    display2();

    pop1();
    pop2();

    display1();
    display2();

    return 0;
}
