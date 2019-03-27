#include <stdio.h>

void MayusculaOMinuscula (char letra);

int main(void)
{
    char Letra;
    printf ("Introduzca una letra\n");
    scanf ("%c", &Letra);
    MayusculaOMinuscula (Letra);
}

void MayusculaOMinuscula (char letra)
{
    if (letra >= 'a' && letra <= 'z')
        printf ("La letra introducida es minuscula\n");
    else
        if (letra >= 'A' && letra <= 'Z')
            printf ("La letra introducida es mayuscula\n");
        else
            printf ("No se ha introducido una letra\n");
}
