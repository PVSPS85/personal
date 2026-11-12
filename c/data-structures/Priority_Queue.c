
#include <stdio.h>
#define SIZE 5

int queue[SIZE], priority[SIZE];
int rear = -1;

void enqueue() {
    int x, p;

    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
    }
    else {
        printf("Enter element: ");
        scanf("%d", &x);

        printf("Enter priority: ");
        scanf("%d", &p);

        rear++;
        queue[rear] = x;
        priority[rear] = p;
    }
}

void dequeue() {
    int i, pos = 0;

    if (rear == -1) {
        printf("Queue Underflow\n");
    }
    else {
        for (i = 1; i <= rear; i++) {
            if (priority[i] < priority[pos])
                pos = i;
        }

        printf("Deleted element: %d\n", queue[pos]);

        for (i = pos; i < rear; i++) {
            queue[i] = queue[i + 1];
            priority[i] = priority[i + 1];
        }

        rear--;
    }
}

void display() {
    int i;

    if (rear == -1) {
        printf("Queue is empty\n");
    }
    else {
        for (i = 0; i <= rear; i++) {
            printf("%d Priority: %d\n", queue[i], priority[i]);
        }
    }
}

int main() {
    int ch;

    while (1) {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
