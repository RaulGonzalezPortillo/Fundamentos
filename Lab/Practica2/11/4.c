#include <stdio.h>

void ComprobacionPrimo (int numero, int *esprimo);

int main (void)
{
  int Numero, EsPrimo;
  printf ("Introduzca un numero positivo determinar si este es primo\n");
  scanf ("%d", &Numero);
  if (Numero > 2)
    {
      ComprobacionPrimo (Numero, &EsPrimo);
      if (EsPrimo == 0)
	printf ("El numero no es primo\n");
      else
	printf ("El numero es primo\n");
    }
  else
    if (Numero == 2 || Numero == 1)
      printf ("El numero es primo\n");
    else
      printf ("El numero no pudo ser procesado\n");
}

void ComprobacionPrimo (int numero, int *esprimo)
{
  int Acumulador = 2;
  while (Acumulador < numero && *esprimo == 0);
      {
	*esprimo = numero % Acumulador;
	Acumulador += 1;
      }
}
