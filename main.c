#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void format_string(char *str);

int main() {
    char *str = NULL;

    str = malloc(15 * sizeof(char));

    printf("Enter the string you want to format: ");

    scanf(" %[^\n]", str);

    format_string(str);

    free(str);
    str = NULL;

    return 0;
}

void format_string(char *str) {
    int i = 0;

    while (str[i] != '\n') {
        if(str[i] == ' ')
            str[i] = '_';

        str[i] = tolower(str[i]);

        i++;
    }

    printf("%s\n", str);
}
