#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

long long calcular_horas(int *horas, int num_semanas, char saida);

int main(void)
{
    printf("Quantas semanas de estudo na CS50? ");
    int num_semanas;
    scanf("%d", &num_semanas);

    int horas[num_semanas];

    for (int i = 0; i < num_semanas; i++)
    {
        printf("Horas na semana %d: ", i);
        scanf("%d", &horas[i]);
    }

    char saida;
    do
    {.
        printf("\nDigite T para o total ou M para a média de horas por semana: ");
        scanf(" %c", &saida);
        saida = toupper(saida);
    }
    while (saida != 'T' && saida != 'M');

    printf("\n");
    if (saida == 'T')
    {
        printf("Total de horas: %lld\n", calcular_horas(horas, num_semanas, saida));
    }
    else
    {
        printf("Média de horas por semana: %lf\n", (double)calcular_horas(horas, num_semanas, saida) / num_semanas);
    }

    return 0;
}

long long calcular_horas(int *horas, int num_semanas, char saida)
{
    long long total_horas = 0;

    for (int i = 0; i < num_semanas; i++)
    {
        total_horas += horas[i];
    }

    if (saida == 'T')
    {
        return total_horas;
    }
    else
    {
        return total_horas / num_semanas;
    }
}
