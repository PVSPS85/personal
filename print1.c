#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[100];

    printf("Enter the text: ");
    scanf("%s", text);   // FIXED

    int len = strlen(text);

    for (int i = 0; i < len; i++)   // FIXED (< not <=)
    {
        printf("%c\n", text[i]);
        printf("the lenght is %i=",len);
    }

    return 0;
}
