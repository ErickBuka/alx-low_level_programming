#include <stdio.h>
#include <stdlib.h>

int is_digit(char c) {
    return c >= '0' && c <= '9';
}

int main(int argc, char *argv[]) {
    char *num1, *num2;
    int i, result;

    if (argc != 3) {
        fprintf(stderr, "Error\n");
        return 98;
    }

    num1 = argv[1];
    num2 = argv[2];

    for (i = 0; num1[i] != '\0'; i++) {
        if (!is_digit(num1[i])) {
            fprintf(stderr, "Error\n");
            return 98;
        }
    }

    for (i = 0; num2[i] != '\0'; i++) {
        if (!is_digit(num2[i])) {
            fprintf(stderr, "Error\n");
            return 98;
        }
    }

    result = atoi(num1) * atoi(num2);
    printf("%d\n", result);

    return 0;
}
