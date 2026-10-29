#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *temp, *del;
    int pos, i;

    head = malloc(sizeof(struct node));
    head->data = 10;

    head->next = malloc(sizeof(struct node));
    head->next->data = 20;

    head->next->next = malloc(sizeof(struct node);
    head->next->next->data = 30;
    head->next->next->next = NULL;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos == 1) {
        temp = head;
        head = head->next;
        free(temp);
    } else {
        temp = head;

        for (i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }

        del = temp->next;
        temp->next = del->next;
        free(del);
    }

    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
