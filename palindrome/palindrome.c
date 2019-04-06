#include <stdio.h>

void check_palindrome()
{
    char str[100];
    int start, length = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[length] != '\0')
    {
        length++;
    }
    int middle = length / 2;;
    for (start = 0; start < middle; start++)
    {
        if (str[start] != str[length - start - 1])
        {
            printf("The %s is not palindrome", str);
            break;
        }
    }
    if (start == middle)
    {
        printf("The %s is palindrome", str);
    }
}