#include <stdio.h>

int main()
{
    int min, max;
    printf("Menor numero: ");
    scanf("%d", &min);
    printf("Maior numero: ");
    scanf("%d", &max);

    if (min > max)
    {
        int temp = min;
        min = max;
        max = temp;
    }

    int listaPrimos[max];
    for (int i = 2; i <= max; i++)
    {
        if (i >= min)
        {
            listaPrimos[i] = 1;
        }
    }

    listaPrimos[0] = listaPrimos[1] = 0;

    for (int i = 2; i <= max; i++)
    {
        if (listaPrimos[i])
        {
            int multiplo = i;

            while (multiplo + i <= max)
            {
                multiplo += i;
                listaPrimos[multiplo] = 0;
            }
        }
    }

    for (int i = 2; i <= max; i++)
        if (listaPrimos[i])
            printf("%d\n", i);

    return 0;
}
