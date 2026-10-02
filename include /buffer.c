#include <stdlib.h>
#include "buffer.h"

int add_char(char **buffer, int *index, int *buffer_size, char value) {
    if (*buffer == NULL) {
        return 1;
    }

    if (*index >= *buffer_size) {
        *buffer_size *= 2;

        char *temp = realloc(*buffer, *buffer_size);

        if (temp == NULL) {
            return 1;
        }

        *buffer = temp;
    }

    (*buffer)[*index] = value;
    (*index)++;

    return 0;
}
