#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

float count_letters(string texto, int str_length);
float count_words(string texto, int str_length);
float count_sens(string texto, int str_length);

int main(void)
{
    string texto = get_string("Texto: ");
    int length = strlen(texto);
    float letter_count = count_letters(texto, length);
    float word_count = count_words(texto, length);
    int sen_count = count_sens(texto, length);

    int L = round((100 / word_count) * letter_count);
    int S = round((100 / word_count) * sen_count);

    float index = 0.0588 * L - 0.296 * S - 15.8;
    index = round(index);

    if (index < 1)
    {
      printf("Antes do Grau 1\n");
    }
    else if (index > 0 && index < 16)
    {
        printf("Grau %i\n", (int) index);
    }
    else
    {
        printf("Grau 16+\n");
    }
}

float count_letters(string texto, int str_length)
{
     int letters = 0;

     for (int i = 0; i < str_length; i++)
    {
        if (isalpha(texto[i]) != 0)
        {
            letters++;
        }
    }
    return letters;
}

float count_words(string texto, int str_length)
{
    int words = 0;

    for (int i = 0; i < str_length; i++)
    {
        if(texto[i] == 32)
        {
            words++;
        }
    }
    words++;

    return words;
}

float count_sens(string texto, int str_length)
{
    int sentences = 0;

    for (int i = 0; i < str_length; i++)
    {
        if (texto[i] == '!' || texto[i] == '.' || texto[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
