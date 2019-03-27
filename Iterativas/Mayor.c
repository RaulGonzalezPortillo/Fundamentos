#include <stdio.h>

int main (void)
{
  int Numero, NMayor = -1;
  do
    {
      printf("\nIntroduzca un numero positivo, introducir un numero negativo terminara el programa ");
      scanf("%d", &Numero);
      if(Numero > NMayor)
	NMayor = Numero;
    }
  while (Numero >= 0);
  printf("\nEl numero mayor es %d", NMayor);
}
