#include <stdio.h>
#include <string.h>

void Leer (char Cadena []);
void MayusculaMinuscula (char Cadena []);

int main (void)
{
    char Frase [200];
    Leer (Frase);
    MayusculaMinuscula (Frase);
}

void Leer (char Cadena [])
{
    printf ("A continuacion, ingrese una frase\n");
    gets (Cadena);
}

void MayusculaMinuscula (char Cadena [])
{
    int Longitud, i;
    Longitud = strlen (Cadena);
    if (Cadena [0] >= 97 && Cadena [0] <= 122)
        Cadena [0] -= 32;
    for (i = 1; i < Longitud - 1; i ++)
    {
        if (Cadena [i] >= 97 && Cadena [i] <= 122 && (Cadena [i - 1] == ' ' || Cadena [i + 1] == ' '))
            Cadena [i] -= 32;
    }
    if (Cadena [Longitud - 1] >= 97 && Cadena [Longitud - 1] <= 122)
        Cadena [Longitud - 1] -= 32;
    printf ("La frase con la primera y ultima letra de cada palabra convertida a mayuscula es:\n");
    puts (Cadena);
}
