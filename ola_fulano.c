#include <stdio.h>
#include <cs50.h>

int main() {
    printf("Qual o seu nome? ");

    char name[50];

    scanf("%s", name);
    printf("Olá, %s!\n", name);

    return 0;
}
