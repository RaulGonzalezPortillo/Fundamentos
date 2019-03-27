#include <stdio.h>

int main (void)
{
  int Numeros[100], Cantidad, Indice, Indice2, Aux;
  printf ("Introduzca la cantidad de numeros a leer, esta no debe de ser mayor a 100\n");
  scanf ("%d", &Cantidad);
  if (Cantidad <= 100)
    {
      for (Indice = 0; Indice < Cantidad; Indice ++)
	{
	  printf ("\nValor #%d: ", Indice + 1);
	  scanf ("%d", &Numeros[Indice]);
	}
      for (Indice = 0; Indice < Cantidad; Indice++)
	{
	  for (Indice2 = Indice + 1; Indice2 < Cantidad; Indice2++)
	    {
	      if (Numeros[Indice] > Numeros [Indice2])
		{
		  Aux = Numeros[Indice];
		  Numeros[Indice] = Numeros[Indice2];
		  Numeros[Indice2] = Aux;
		}
	    }
	}
      for (Indice = 0; Indice < Cantidad; Indice++)
	printf ("%d\n", Numeros[Indice]);
    }
  else
    printf ("Se ha especificado que se introducirian mas de 100 numeros, por lo que el programa se detuvo\n");
}
  
