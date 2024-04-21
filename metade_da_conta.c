#include <cs50.h>
#include <stdio.h>

int main()
{
    int numPessoas;
    float valorDespesas, gorjeta, valorTotal, valorPorPessoa;

    printf("Digite o valor da conta, gorjeta e a quantidade de pessoas:");
    scanf("%f%f%d", &valorDespesas, &gorjeta, &numPessoas);

    valorTotal = valorDespesas * gorjeta/100 + valorDespesas;
    valorPorPessoa = valorTotal / numPessoas;
    printf("Cada um ira pagar R$%.2f\n", valorPorPessoa);

    return 0;
}
