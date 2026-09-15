#include <stdio.h>

// Function to read password
void read_pwd(char pwd[])
{
    printf("\nEnter the password: ");
    scanf("%14s", pwd);   // Read up to 14 characters
}

// Function to analyse password
void count(char pwd[])
{
    int i = 0;
    int upper = 0, lower = 0, digit = 0, spl = 0;
    int score = 0;

    // Traverse the string until the null character

    while (pwd[i] != '\0')
    {
        if (pwd[i] >= 'A' && pwd[i] <= 'Z')
            upper++;
        else if (pwd[i] >= 'a' && pwd[i] <= 'z')
            lower++;
        else if (pwd[i] >= '0' && pwd[i] <= '9')
            digit++;
        else
            spl++;

        i++;
    }

    printf("\nNumber of Uppercase letters : %d", upper);
    printf("\nNumber of Lowercase letters : %d", lower);
    printf("\nNumber of Digits            : %d", digit);
    printf("\nNumber of Special Characters: %d", spl);
    printf("\nLength of Password          : %d\n", i);

    if (i >= 8) score++;
    if (upper > 0) score++;
    if (lower > 0) score++;
    if (digit > 0) score++;
    if (spl > 0) score++;

    printf("\nPassword Strength : ");

    if (score <= 4)
    {
        printf("Weak Password\n");

        printf("\nSuggestions:\n");
        if (i < 8)
            printf("- Increase password length\n");
        if (upper == 0)
            printf("- Add uppercase letters\n");
        if (lower == 0)
            printf("- Add lowercase letters\n");
        if (digit == 0)
            printf("- Add digits\n");
        if (spl == 0)
            printf("- Add special characters\n");
    }
    else
    {
        printf("Strong Password\n");
    }
}

int main()
{
    char pwd[15];

    read_pwd(pwd);
    count(pwd);

    return 0;
}
