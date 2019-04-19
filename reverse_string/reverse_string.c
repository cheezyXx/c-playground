#include <stdio.h>

void reverse() {
    char *start, *end, str[255], temp;
    printf("Type a word: ");
    scanf("%s", str);
    start = str;
    end = str;

    int length = 0, i = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length - 1; i++) {
        end++;
    }

    for (i = 0; i < length / 2; i++) {
        temp = *end;
        *end = *start;
        *start = temp;
        start++;
        end--;
    }
    printf("Reversed word: %s", str);
}
