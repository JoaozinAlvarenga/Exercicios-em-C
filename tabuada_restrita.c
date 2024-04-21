#include <stdio.h>

int main() {

    int n, i, f;
    printf("Você quer a tabuada de qual número? ");
    scanf("%d", &n);
    printf("Você quer começar a tabuada em qual número? ");
    scanf("%d", &i);
    printf("Você quer terminar a tabuada em qual número? ");
    scanf("%d", &f);

    if (n < 1 || n > 99 || i < 0 || i > 10 || f < 0 || f > 10 || i > f) {
        printf("Erro na especificação da tabuada.\n");

    } else {

        for (int j = i; j <= f; ++j) {
            printf("%d x %d = %d\n", n, j, n * j);
        }
    }
    return 0;
}
