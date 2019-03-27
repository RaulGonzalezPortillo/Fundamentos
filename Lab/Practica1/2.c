#include <stdio.h>

int main (void)
{
  int Suma = 0;
  printf ("La serie de numenos multiplos de 3 desde 3 hasta el 99 es: ");
  while (Suma < 99)
  {
      Suma = Suma + 3;
      printf ("%d ", Suma);
  }
  printf ("\n");
}
