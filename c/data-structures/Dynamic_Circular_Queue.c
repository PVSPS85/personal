
#include <stdio.h>
#include <stdlib.h>

int *queue;
int front = -1, rear = -1;
int size = 2;

void enqueue() {
    int x;

    printf("Enter element: ");
    scanf("%d", &x);

    if (front == -1) {
        front = rear = 0;
        queue[rear] = x;
    }
    else {
        if ((rear + 1) % size == front) {
            int newSize = size * 2;
            int *temp = malloc(newSize * sizeof(int));

            int i = 0, j = front;

            while (1) {
                temp[i++] = queue[j];

                if (j == rear)
                    break;

                j = (j + 1) % size;
            }

            free(queue);
            queue = temp;

            front = 0;
            rear = i - 1;
            size = newSize;
        }

        rear = (rear + 1) % size;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
    }
    else {
        printf("Deleted element: %d\n", queue[front]);

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % size;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    }
    else {
        int i = front;

        printf("Queue elements: ");

        while (1) {
            printf("%d ", queue[i]);

            if (i == rear)
                break;

            i = (i + 1) % size;
        }
    }
}

int main() {
    int ch;

    queue = malloc(size * sizeof(int));

    while (1) {
        printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4:
                free(queue);
                return 0;
            default: printf("Invalid choice\n");
        }
    }
}
