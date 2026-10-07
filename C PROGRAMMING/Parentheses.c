#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return stack[top--];
}

int matching(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int main()
{
    char exp[MAX];
    int i;
    int balanced = 1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for (i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' ||
            exp[i] == '[' ||
            exp[i] == '{')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')' ||
                 exp[i] == ']' ||
                 exp[i] == '}')
        {
            if (top == -1 ||
                !matching(pop(), exp[i]))
            {
                balanced = 0;
                break;
            }
        }
    }

    if (top != -1)
        balanced = 0;

    if (balanced)
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
