#include <stdio.h>

int main(void)
{
  int Numero;
  long long int Factorial = 1;
  printf("Introduzca un numero para obtener la factorial:\n");
  scanf("%d", &Numero);
  if(Numero >= 2)
    {
      for(int i=Numero ; i != 1 ; i--)
	Factorial=Factorial*i;
      printf("La factorial es: %lli\n",Factorial);
    }
  if(Numero == 1)
    printf("La factorial es: 1\n");
  if(Numero <= 0)
    printf("Imposible calcular\n");
}
