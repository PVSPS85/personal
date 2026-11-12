
#include <stdio.h>
#include <stdlib.h>

int *queue;
int front = -1, rear = -1;
int capacity = 3;
int count = 0;

void enqueue() {
    int x, i;

    if (count == capacity) {
        int *temp = malloc(count * sizeof(int));

        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return;
        }

        for (i = 0; i < count; i++)
            temp[i] = queue[(front + i) % capacity];

        int *newQueue = realloc(queue, 2 * capacity * sizeof(int));

        if (newQueue == NULL) {
            free(temp);
            printf("Memory allocation failed\n");
            return;
        }

        queue = newQueue;
        capacity = capacity * 2;

        for (i = 0; i < count; i++)
            queue[i] = temp[i];

        free(temp);

        front = 0;
        rear = count - 1;

        printf("Queue size increased to %d\n", capacity);
    }

    printf("Enter element: ");
    scanf("%d", &x);

    if (count == 0)
        front = rear = 0;
    else
        rear = (rear + 1) % capacity;

    queue[rear] = x;
    count++;
}

void dequeue() {
    if (count == 0) {
        printf("Queue Underflow\n");
    }
    else {
        printf("Deleted element: %d\n", queue[front]);

        if (count == 1)
            front = rear = -1;
        else
            front = (front + 1) % capacity;

        count--;
    }
}

void display() {
    int i;

    if (count == 0) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Queue elements: ");

        for (i = 0; i < count; i++)
            printf("%d ", queue[(front + i) % capacity]);

        printf("\n");
    }
}

int main() {
    int ch;

    queue = malloc(capacity * sizeof(int));

    if (queue == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    while (1) {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4:
                free(queue);
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }
}
