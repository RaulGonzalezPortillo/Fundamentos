#include <stdio.h>

void OperacionesPares (int numeropar, int sumapares, int cantidadpares, int *nvasumapares, int *nvacantidadpares);
void OperacionesImpares (int numeroimpar, int mediaimpares, int cantidadimpares, int *nvamediaimpares, int *nvacantidadimpares);

int main (void)
{
  int Numero, SumaPares = 0, CantidadPares = 0, MediaImpares = 0, CantidadImpares = 0;
  for (int i = 1; i <= 10; i++)
    {
      printf ("Introduce un numero\n");
      __fpurge (stdin);
      scanf ("%d", &Numero);
      if ((Numero % 2) == 0)
	OperacionesPares (Numero, SumaPares, CantidadPares, &SumaPares, &CantidadPares);
      else
	OperacionesImpares (Numero, MediaImpares, CantidadImpares, &MediaImpares, &CantidadImpares);
    }
  MediaImpares /= CantidadImpares;
  printf ("La suma de los numeros pares introducidos es: %d\n", SumaPares);
  printf ("La cantidad de numeros pares introducidos es: %d\n", CantidadPares);
  printf ("La media aritmetica de los numeros impares introducidos es: %d\n", MediaImpares);
  printf ("La cantidad de numeros impares introducidos es: %d\n", CantidadImpares);
}

void OperacionesPares (int numeropar, int sumapares, int cantidadpares, int *nvasumapares, int *nvacantidadpares)
{
  *nvasumapares = sumapares + numeropar;
  *nvacantidadpares = cantidadpares + 1;
}

void OperacionesImpares (int numeroimpar, int mediaimpares, int cantidadimpares, int *nvamediaimpares, int *nvacantidadimpares)
{
  *nvamediaimpares =  mediaimpares + numeroimpar;
  *nvacantidadimpares = cantidadimpares + 1;
}
