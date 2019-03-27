#include <stdio.h>

int main (void)
{
  int Numeros[100], Cantidad, Indice, Indice2, Indice3, Indice4, Indice5, Aux;
  for (Indice5 = 0; Indice5 < 100; Indice5++)
    Numeros[Indice5] = 2147483647;
  printf ("Introduzca la cantidad de numeros a leer, esta no debe de ser mayor a 100\n");
  __fpurge (stdin);
  scanf ("%d", &Cantidad);
  if (Cantidad <= 100)
    {
      for (Indice = 0; Indice < Cantidad; Indice ++)
	{
	  printf ("\nValor #%d: ", Indice + 1);
	  __fpurge (stdin);
	  scanf ("%d", &Numeros[Indice]);
	  for (Indice2 = 0; Indice2 < Cantidad; Indice2 ++)
	    {
	      for (Indice3 = Indice2 + 1; Indice3 < Cantidad; Indice3 ++)
		{
		  if (Numeros[Indice2] > Numeros [Indice3])
		    {
		      Aux = Numeros[Indice2];
		      Numeros[Indice2] = Numeros[Indice3];
		      Numeros[Indice3] = Aux;
		    }
		}
	    }
	  printf ("Numeros ingresados hasta ahora en orden ascendente:\n");
	  for (Indice4 = 0; Indice4 < Cantidad; Indice4++)
	    if (Numeros[Indice4] != 2147483647)
		printf ("%d\n", Numeros[Indice4]);
	}
    }
  else
    printf ("Se ha especificado que se introducirian mas de 100 numeros, por lo que el programa se detuvo\n");
}
  
