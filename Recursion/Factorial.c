#include <stdio.h>

int factorial (int numero);

int main (void)
{
  int num;
  printf ("Ingrese un numero para obtener su factorial:\n");
  scanf ("%d", &num);
  if (num < 0)
    printf ("%d! = -%d\n", num, factorial (num * -1));
  else
    printf ("%d! = %d\n", num, factorial (num));
}

int factorial (int numero)
{
  if (numero > 1)
    return numero * factorial (numero - 1);
  else
    return 1;
}
