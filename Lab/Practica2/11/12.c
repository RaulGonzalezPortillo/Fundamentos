#include <stdio.h>

void SumaDeDiezNumeros (int *suma);

int main (void)
{
  int Suma;
  SumaDeDiezNumeros (&Suma);
  printf ("La suma de los 10 numeros da como resultado %d\n", Suma);
}

void SumaDeDiezNumeros (int *suma)
{
  int numero;
  *suma = 0;
  for (int i = 1; i <= 10; i++)
    {
      printf ("Introduzca un numero\n");
      scanf ("%d", &numero);
      *suma += numero;
    }
}
