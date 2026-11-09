#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[100];

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);   // ✅ FIXED (takes full sentence)

    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        printf("%c\n", text[i]);
    }

    printf("The length is: %d\n", len);   // ✅ moved outside loop

    return 0;
}