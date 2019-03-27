#include <stdio.h>

void NMayor(int Numero, int *NumeroMayor);

int main (void)
{
  int Numero, NumeroMayor;
  printf ("Ingrese un numero\n");
  scanf("%d", &Numero);
  NMayor(Numero, &NumeroMayor);
  printf ("El numero mayor fue %d\n", NumeroMayor);
}

void NMayor(int Numero, int *NumeroMayor)
{
  int Acumulador = 1;
  *NumeroMayor = Numero;
  while (Acumulador <= 3)
    {
      printf ("Ingrese otro numero\n");
      scanf("%d", &Numero);
      if (Numero > *NumeroMayor)
	*NumeroMayor = Numero;
      Acumulador += 1;
    }
}
