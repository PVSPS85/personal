
#include <stdio.h>
#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

void insertFront() {
    int x;

    if (rear == SIZE - 1) {
        printf("Overflow\n");
    }
    else {
        printf("Enter element: ");
        scanf("%d", &x);

        if (front == -1)
            front = rear = 0;
        else
            front--;

        deque[front] = x;
    }
}

void insertRear() {
    int x;

    if (rear == SIZE - 1) {
        printf("Overflow\n");
    }
    else {
        printf("Enter element: ");
        scanf("%d", &x);

        if (front == -1)
            front = rear = 0;
        else
            rear++;

        deque[rear] = x;
    }
}

void deleteFront() {
    if (front == -1) {
        printf("Underflow\n");
    }
    else {
        printf("Deleted: %d\n", deque[front]);

        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
}

void deleteRear() {
    if (front == -1) {
        printf("Underflow\n");
    }
    else {
        printf("Deleted: %d\n", deque[rear]);

        if (front == rear)
            front = rear = -1;
        else
            rear--;
    }
}

void display() {
    int i;

    if (front == -1)
        printf("Deque is empty\n");
    else {
        for (i = front; i <= rear; i++)
            printf("%d ", deque[i]);
    }
}

int main() {
    int ch;

    while (1) {
        printf("\n1.Insert Front");
        printf("\n2.Insert Rear");
        printf("\n3.Delete Front");
        printf("\n4.Delete Rear");
        printf("\n5.Display");
        printf("\n6.Exit");

        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: insertFront(); break;
            case 2: insertRear(); break;
            case 3: deleteFront(); break;
            case 4: deleteRear(); break;
            case 5: display(); break;
            case 6: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
