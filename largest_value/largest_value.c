#include <stdio.h>
#include "largest_value.h"

void find() {
    int values[6] = {1, 2, 36, 2, 20, 30};
    int *ptr = values;
    int size = sizeof(values) / sizeof(values[0]);

    int i = 0;
    int found = *ptr;
    for (i = 1; i < size; i++) {
        if (*ptr > found) {
            found = *ptr;
        }
        ptr++;
    }
    printf("%d", found);
}
