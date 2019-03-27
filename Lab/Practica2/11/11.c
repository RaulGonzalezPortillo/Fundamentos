#include <stdio.h>

void ActualizarNumeroMayor (int numero, int numeromayor, int *nuevonumeromayor);

int main (void)
{
  int NumeroMayor = -1, Numero;
  do
    {
      printf ("Ingresa un numero positivo, los numeros negativos no se procesaran, ingresa -99 para terminar\n");
      scanf ("%d", &Numero);
      ActualizarNumeroMayor (Numero, NumeroMayor, &NumeroMayor);
    }
  while (Numero != -99);
  if (NumeroMayor == -1)
    printf ("No se introdujo ningun numero antes de introducir -99\n");
  else
    printf ("El numero mayor fue %d\n", NumeroMayor);
}
  
void ActualizarNumeroMayor (int numero, int numeromayor, int *nuevonumeromayor)
{
  if (numero > numeromayor)
    *nuevonumeromayor = numero;
  if (numero < 0 && numero != -99)
    printf ("Este numero no ha sido procesado\n");
}
