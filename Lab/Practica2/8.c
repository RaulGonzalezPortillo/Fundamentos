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
    for (i = 0; i < Longitud; i ++)
    {
        if (Cadena [i] >= 65 && Cadena [i] <= 90)
            Cadena [i] += 32;
    }
    printf ("La frase en minusculas es:\n");
    puts (Cadena);
    for (i = 0; i < Longitud; i ++)
    {
        if (Cadena [i] >= 97 && Cadena [i] <= 122)
            Cadena [i] -= 32;
    }
    printf ("La frase en mayusculas es:\n");
    puts (Cadena);
}
