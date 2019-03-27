#include <stdio.h>

int main (void)
{
  int Acumulador = 1;
  int Numero, NumeroMayor;
  printf ("Ingrese un numero\n");
  __fpurge (stdin);
  scanf("%d", &Numero);
  NumeroMayor = Numero;
  while (Acumulador <= 3)
    {
      printf ("Ingrese otro numero\n");
      __fpurge (stdin);
      scanf("%d", &Numero);
      if (Numero > NumeroMayor)
	NumeroMayor = Numero;
      Acumulador += 1;
    }
  printf ("El numero mayor fue %d\n", NumeroMayor);
}
