#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *trocar(char *str);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: ./sem_vogais palavra\n");
        return 1;
    }

    char *result = trocar(argv[1]);
    printf("%s\n", result);
    free(result);
    return 0;
}

char *trocar(char *str) {
    int len = strlen(str);
    char *result = malloc(len + 1);
    int i = 0;

    for (; str[i]; i++) {
        switch (tolower(str[i])) {
            case 'a':
                result[i] = '6';
                break;
            case 'e':
                result[i] = '3';
                break;
            case 'i':
                result[i] = '1';
                break;
            case 'o':
                result[i] = '0';
                break;
            case 'u':
                result[i] = 'v';
                break;
            default:
                result[i] = str[i];
                break;
        }
    }

    result[len] = '\0';
    return result;
}
