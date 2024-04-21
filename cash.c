#include <cs50.h>
#include <stdio.h>

int get_troco(void);
int calcular_moedas50(int troco);
int calcular_moedas25(int troco);
int calcular_moedas10(int troco);
int calcular_moedas05(int troco);
int calcular_moedas01(int troco);

int main(void)
{
    int troco = get_troco();

    int moedas50 = calcular_moedas50(troco);
    troco = troco - moedas50 * 50;

    int moedas25 = calcular_moedas25(troco);
    troco = troco - moedas25 * 25;

    int moedas10 = calcular_moedas10(troco);
    troco = troco - moedas10 * 10;

    int moedas05 = calcular_moedas05(troco);
    troco = troco - moedas05 * 5;

    int moedas01 = calcular_moedas01(troco);
    troco = troco - moedas01;

    int moedas = moedas50 + moedas25 + moedas10 + moedas05 + moedas01;

    printf("%i\n", moedas);

    return 0;
}

int get_troco(void)
{
    int troco;
    do
    {
        troco = get_int("Informe o troco devido (em centavos): ");
    }
    while (troco < 0);

    return troco;
}

int calcular_moedas50(int troco)
{
    int calculo = 0;
    while (troco >= 50)
    {
        calculo++;
        troco = troco - 50;
    }
    return calculo;
}

int calcular_moedas25(int troco)
{
    int calculo = 0;
    while (troco >= 25)
    {
        calculo++;
        troco = troco - 25;
    }
    return calculo;
}

int calcular_moedas10(int troco)
{
    int calculo = 0;
    while (troco >= 10)
    {
        calculo++;
        troco = troco - 10;
    }
    return calculo;
}

int calcular_moedas05(int troco)
{
    int calculo = 0;
    while (troco >= 5)
    {
        calculo++;
        troco = troco - 5;
    }
    return calculo;
}

int calcular_moedas01(int troco)
{
    int calculo = 0;
    while (troco >= 1)
    {
        calculo++;
        troco = troco - 1;
    }
    return calculo;
}
