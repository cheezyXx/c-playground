#include <stdio.h>

int ifexists(char u, const char p[], int v, int q[])
{
    int i;
    for (i = 0; i <= v; i++)
    {
        if (p[i] == u)
        {
            q[i]++;
            return (1);
        }
    }
    if (i > v)
    {
        return (0);
    }
}

void count_characters()
{
    char word[100];
    char chr[100];
    printf("Type a word: ");
    scanf("%s", word);
    chr[0] = word[0];
    int i, x = 0, count[100];
    count[0] = 1;
    int length = 0;
    while (word[length] != '\0')
    {
        length++;
    }
    for (i = 1; i < length; i++)
    {
        if (!ifexists(word[i], chr, x, count))
        {
            x++;
            chr[x] = word[i];
            count[x] = 1;
        }
    }
    printf("The count of each character in the string %s is \n", word);
    for (i = 0; i <= x; i++)
    {
        printf("%c\t%d\n", chr[i], count[i]);
    }
}
