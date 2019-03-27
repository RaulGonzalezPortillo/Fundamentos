#include <stdio.h>

int main (void)
{
  int Valores[10], Mayor, Menor, Indice;
  float Sumatoria = 0, Promedio;
  printf ("Introduzca 10 valores enteros para calcularles la sumatoria y el promedio, así como imprimir el valor mas grande y el mas pequeño\n");
  for (Indice = 0; Indice < 10; Indice ++)
    {
      printf ("\nValor #%d: ", Indice + 1);
      scanf ("%d", &Valores[Indice]);
    }
  Mayor = Valores[0];
  Menor = Valores[0];
  for (Indice = 0; Indice < 10; Indice ++)
    {
      Sumatoria += Valores[Indice];
      if (Valores[Indice] > Mayor)
	Mayor = Valores[Indice];
      if (Valores[Indice] < Menor)
	Menor = Valores[Indice];
    }
  printf ("La sumatoria de los valores es igual a %.0f\n", Sumatoria);
  printf ("El promedio de los valores es igual a %.2f\n", (Sumatoria / 10));
  printf ("El numero mayor es igual a %d\n", Mayor);
  printf ("El numero menor es igual a %d\n", Menor);
}
  
  
