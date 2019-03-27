#include <stdio.h>

void Imprimir (int *Acumulador);

int main (void)
{
  int Acumulador;
  Imprimir (&Acumulador);
  printf ("Se introdujeron %d numero(s)\n", Acumulador);
}

void Imprimir (int *Acumulador)
{
  int Numero;
  *Acumulador = 0;
  do
    {
      printf ("Introduzca un numero, introduzca el numero '0' para terminar\n");
      scanf ("%d", &Numero);
      if (Numero != 0)
	{
	  printf ("Se introdujo el numero %d\n", Numero);
	  *Acumulador += 1;
	}
    }
  while (Numero != 0);
}
