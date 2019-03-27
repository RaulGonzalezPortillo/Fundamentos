#include <stdio.h>

int main (void)
{
  int Tabla = 1;
  int Multiplicador, Resultado;
  printf ("Tablas de multiplicar del 1 al 20\n");
  do
    {
      printf ("Tabla del %d\n", Tabla);
      Multiplicador = 1;
      do
	{
	  Resultado = Tabla * Multiplicador;
	  printf ("%d x %d = %d\n", Tabla, Multiplicador, Resultado);
	  Multiplicador += 1;
	}
      while (Multiplicador <= 10);
      Tabla += 1;
    }
  while (Tabla <= 20);
}
