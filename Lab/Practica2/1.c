#include <stdio.h>
#include <math.h>

void Potenciacion (int Base []);

int main (void)
{
  int Cuadrados [100];
  printf ("Calculando el cuadrado de los primeros 100 numeros positivos...\n");
  Potenciacion (Cuadrados);
  printf ("Resultados:\n");
  printf (" X:      X^2:\n");
  for (int i = 0; i < 100; i ++)
    printf ("%3d     %5d\n", i + 1, Cuadrados [i]);
}

void Potenciacion (int Base [])
{
  for (int i = 0; i < 100; i ++)
    Base [i] = pow (i + 1, 2);
}
