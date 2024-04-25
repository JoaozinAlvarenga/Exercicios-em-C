#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Peça importante //
const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Pergunta ao usuário a mensagem a ser codificada //
    string msg = get_string("Message: ");

    // Repete até o último caractere da mensagem //
    for (int i = 0; msg[i] != msg[-1]; i++)
    {
        // Define as variáveis
        int decimal = msg[i];
        char byte[BITS_IN_BYTE];
        int pos = BITS_IN_BYTE - 1;

        // Preenche a lista byte com o caracteres '0' //
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            byte[j] = '0';
        }

        // Por 2 e conferindo se o resto é 1 ou 0 //
        while (decimal > 0)
        {
            if (decimal % 2 == 1)
            {
                byte[pos] = '1';
            }
            pos--;
            decimal = decimal / 2;
        }

        // Varre toda a lista byte e se o bit for '0', mostra a luz apagada, mas, se o bit for '1', mostra a luz acesa //
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            if (byte[j] == '1')
            {
                print_bulb(1);
            }
            else
            {
                print_bulb(0);
            }
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        printf("\U0001F7E1");
    }
}
