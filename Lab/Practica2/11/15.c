#include <stdio.h>

void Potenciacion (int x, int n, int *resultado);

int main (void)
{
  int X, N, Resultado;
  printf ("Ingrese los valores para elevar x a la n utilizando el formato 'x ^ n'\n");
  scanf ("%d ^ %d", &X, &N);
  Potenciacion (X, N, &Resultado);
  printf ("El resultado de elevar %d a la %d es igual a: %d\n", X, N, Resultado);
}

void Potenciacion (int x, int n, int *resultado)
{
  *resultado = x;
  for (int i = 2; i <= n; i++)
    *resultado *= x;
}
