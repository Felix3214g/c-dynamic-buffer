#include <stdio.h>
#include <stdlib.h>
#include "buffer.h"

int main() {
    int BUFFER_SIZE = 5;
    char *buffer = malloc(BUFFER_SIZE);
    int index = 0;

    if (buffer == NULL) {
        return 1;
    }

    // Demo with HELLO
    if (
        add_char(&buffer, &index, &BUFFER_SIZE, 'H') != 0 ||
        add_char(&buffer, &index, &BUFFER_SIZE, 'E') != 0 ||
        add_char(&buffer, &index, &BUFFER_SIZE, 'L') != 0 ||
        add_char(&buffer, &index, &BUFFER_SIZE, 'L') != 0 ||
        add_char(&buffer, &index, &BUFFER_SIZE, 'O') != 0 ||
        add_char(&buffer, &index, &BUFFER_SIZE, '\0') != 0
    ) {
        printf("Error adding character to buffer\n");
        free(buffer);
        return 1;
    }

    printf("%s\n", buffer);

    free(buffer);
    return 0;
}
