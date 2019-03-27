#include <stdio.h>

void ConversionAMinusculas (char letraaconvertir1, char letraaconvertir2, char *letraconvertida1, char *letraconvertida2);

int main(void)
{
    char Letra1, Letra2;
    printf ("Ingrese las letras 1 y 2 separadas por una coma\n");
    scanf ("%c, %c", &Letra1, &Letra2);
    ConversionAMinusculas (Letra1, Letra2, &Letra1, &Letra2);
    if (Letra1 >= 'a' && Letra1 <= 'z' && Letra2 >= 'a' && Letra2 <= 'z')
    {
        if (Letra2 > Letra1)
            printf ("Las letras estan ordenadas alfabeticamente\n");
        else
            printf ("Las letras no estan ordenadas alfabeticamente\n");
    }
    else
        printf ("Al menos uno de los valores introducidos no era una letra\n");
}

void ConversionAMinusculas (char letraaconvertir1, char letraaconvertir2, char *letraconvertida1, char *letraconvertida2)
{
    if (letraaconvertir1 >= 'A' && letraaconvertir1 <= 'Z')
        *letraconvertida1 = letraaconvertir1 + 32;
    if (letraaconvertir2 >= 'A' && letraaconvertir2 <= 'Z')
        *letraconvertida2 = letraaconvertir2 + 32;
}
