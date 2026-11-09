#include <stdio.h>

#define MAX 12
#define N 3
#define SIZE 4

int arr[MAX];
int top[N] = {-1, -1, -1};

void push(int stackNo, int value)
{
    int start = stackNo * SIZE;
    int end = start + SIZE - 1;

    if (top[stackNo] == end - start)
    {
        printf("Stack %d Overflow\n", stackNo + 1);
    }
    else
    {
        top[stackNo]++;
        arr[start + top[stackNo]] = value;
    }
}

void pop(int stackNo)
{
    int start = stackNo * SIZE;

    if (top[stackNo] == -1)
    {
        printf("Stack %d Underflow\n", stackNo + 1);
    }
    else
    {
        printf("Popped = %d\n",
               arr[start + top[stackNo]]);

        top[stackNo]--;
    }
}

void display(int stackNo)
{
    int i;
    int start = stackNo * SIZE;

    printf("Stack %d: ", stackNo + 1);

    for (i = top[stackNo]; i >= 0; i--)
    {
        printf("%d ", arr[start + i]);
    }

    printf("\n");
}

int main()
{
    push(0, 10);
    push(0, 20);

    push(1, 30);
    push(1, 40);

    push(2, 50);
    push(2, 60);

    display(0);
    display(1);
    display(2);

    pop(0);
    pop(1);
    pop(2);

    return 0;
}
