
#include <stdio.h>
#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

void insertFront() {
    int x;

    if ((rear + 1) % SIZE == front) {
        printf("Deque Overflow\n");
    }
    else {
        printf("Enter element: ");
        scanf("%d", &x);

        if (front == -1)
            front = rear = 0;
        else
            front = (front - 1 + SIZE) % SIZE;

        deque[front] = x;
    }
}

void insertRear() {
    int x;

    if ((rear + 1) % SIZE == front) {
        printf("Deque Overflow\n");
    }
    else {
        printf("Enter element: ");
        scanf("%d", &x);

        if (front == -1)
            front = rear = 0;
        else
            rear = (rear + 1) % SIZE;

        deque[rear] = x;
    }
}

void deleteFront() {
    if (front == -1) {
        printf("Deque Underflow\n");
    }
    else {
        printf("Deleted element: %d\n", deque[front]);

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;
    }
}

void deleteRear() {
    if (front == -1) {
        printf("Deque Underflow\n");
    }
    else {
        printf("Deleted element: %d\n", deque[rear]);

        if (front == rear)
            front = rear = -1;
        else
            rear = (rear - 1 + SIZE) % SIZE;
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("Deque is empty\n");
    }
    else {
        printf("Deque elements: ");
        i = front;

        while (1) {
            printf("%d ", deque[i]);

            if (i == rear)
                break;

            i = (i + 1) % SIZE;
        }
    }
}

int main() {
    int ch;

    while (1) {
        printf("\n\n1.Insert Front");
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
