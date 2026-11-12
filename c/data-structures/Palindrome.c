
#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[100];
    int i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    for (i = 0; i < strlen(str); i++) {
        if (str[i] != pop()) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
