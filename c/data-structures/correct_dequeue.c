#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

// Check if deque is full
int isFull() {
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

// Check if deque is empty
int isEmpty() {
    return (front == -1);
}

// Insert at the front end
void insertFront(int key) {
    if (isFull()) {
        printf("Overflow: Deque is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
        rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front = front - 1;
    }
    deque[front] = key;
    printf("Inserted %d at front\n", key);
}

// Insert at the rear end
void insertRear(int key) {
    if (isFull()) {
        printf("Overflow: Deque is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
        rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    deque[rear] = key;
    printf("Inserted %d at rear\n", key);
}

// Delete from the front end
void deleteFront() {
    if (isEmpty()) {
        printf("Underflow: Deque is empty\n");
        return;
    }
    printf("Deleted %d from front\n", deque[front]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
}

// Delete from the rear end
void deleteRear() {
    if (isEmpty()) {
        printf("Underflow: Deque is empty\n");
        return;
    }
    printf("Deleted %d from rear\n", deque[rear]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear = rear - 1;
    }
}

// Display all elements
void display() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deque elements: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertFront(2);
    display();       // Output: 2 5 10 20

    deleteFront();   // Removes 2
    deleteRear();    // Removes 20
    display();       // Output: 5 10

    return 0;
}
