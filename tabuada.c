#include <stdio.h>
#include <cs50.h>

int main() {

    int n;
    printf("Você quer a tabuada de qual número? ");
    scanf("%d", &n);

    if (n < 1 || n > 99) {
        printf("Erro: número informado não é válido.\n");

    } else {

        for (int i = 0; i <= 10; ++i) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}
