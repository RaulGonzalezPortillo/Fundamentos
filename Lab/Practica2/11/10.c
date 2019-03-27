#include <stdio.h>

void SumaImpares (void);
void SumaPares (void);

int main(void)
{
    printf ("Bienvenido\n");
    printf ("La suma de los numeros impares del 1 al 200 da como resultado: \n");
    SumaImpares ();
    printf ("La suma de los numeros pares del 1 al 200 da como resultado: \n");
    SumaPares ();
}

void SumaImpares (void)
{
    int SumaImpares = 0, AcumuladorImpares;
    for (AcumuladorImpares = 1; AcumuladorImpares <= 200; AcumuladorImpares += 2)
        SumaImpares += AcumuladorImpares;
    printf ("%d\n", SumaImpares);
}

void SumaPares (void)
{
    int SumaPares = 0, AcumuladorPares;
    for (AcumuladorPares = 2; AcumuladorPares <= 200; AcumuladorPares += 2)
        SumaPares += AcumuladorPares;
    printf ("%d\n", SumaPares);
}
