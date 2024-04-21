#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string senha);

int main(void)
{
    string senha = get_string("Digite sua senha: ");
    if (valid(senha))
    {
        printf("Sua senha e válida!\n");
    }
    else
    {
        printf("Sua senha precisa de 1 letra maiúscula, 1 letra minúscula, 1 número e 1 símbolo\n");
    }
}

bool valid(string senha)
{
   bool checkLower = false;
   bool checkUpper = false;
   bool checkNumber = false;
   bool checkSymbol = false;

   for(int i = 0; i < strlen(senha); i++)
   {
        if(islower(senha[i]))
        {
            checkLower = true;
        }
        if(isupper(senha[i]))
        {
            checkUpper = true;
        }
        if(isdigit(senha[i]))
        {
            checkNumber = true;
        }
        if(!isalnum(senha[i]))
        {
            checkSymbol = true;
        }
   }

    if(checkLower == true && checkUpper == true && checkNumber == true && checkSymbol == true)
    {
        return true;
    }

   return false;
}
