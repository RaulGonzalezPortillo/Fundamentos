#include <stdio.h>
#include <math.h>

int main ()
{
  int Numero;
  do
    {
      printf ("Ingresa un numero entero positivo\n");
      scanf ("%d", &Numero);
      if (Numero >= 0)
	{
	  int Repetidor = 1, Cifras = 0, Suma = 0, Exponente = 0;
	  do
	    {
	      if (Numero > pow (10, Exponente)
		{
		  Cifras ++;
		  Suma = (Numero / pow (10, Exponente);
	    }
	  while (Repetidor == 1);
	}
      else
	printf ("Ha ingresado un numero negativo, este no sera procesado");
    }
  while (Numero < 0);
