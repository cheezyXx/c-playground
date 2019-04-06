#include <stdio.h>

int ifexists(char u, const char z[], int v)
{
    int i;
    for (i = 0; i < v; i++)
    {
        if (z[i] == u)
        {
            return (1);
        }
    }
    return (0);
}

void check_occurrence()
{
    char str1[100];
    char str2[100];
    int i, x = 1, length = 0;
    printf("Enter a string: ");
    scanf("%s", str1);
    while (str1[length] != '\0')
    {
        length++;
    }
    str2[0] = str1[0];
    for (i = 1; i < length; i++)
    {
        if (ifexists(str1[i], str2, x))
        {
            printf("The first repetitive character in %s is %c", str1, str1[i]);
            break;
        } else
        {
            str2[x] = str1[i];
            x++;
        }
    }
    if (i == length)
    {
        printf("There is no repetitive character in the string %s", str1);
    }
}