#include <stdio.h>

void Suma (void);

int main (void)
{
  printf ("La serie de numenos multiplos de 3 desde 3 hasta el 99 es: ");
  Suma ();
  printf ("\n");
}

void Suma (void)
{
  int Suma = 0;
  while (Suma < 99)
    {
      Suma = Suma + 3;
      printf ("%d ", Suma);
    }
}
