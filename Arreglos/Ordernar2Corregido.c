#include <stdio.h>

void Inserta (int Lista [], int Numero, int *Insertados);
void Imprime (int Lista [], int Insertados);

int main (void)
{
  int Numeros [100], Valor, PorIntroducir, Introducidos = 0, i;
  do
    {
      printf ("¿Cuantos numeros quieres introducir? (Maximo 100)\n");
      scanf ("%d", &PorIntroducir);
      if (PorIntroducir > 100)
	printf ("Te dije que no podian ser mas de 100\n");
    }
  while (PorIntroducir > 100);
  for (i = 0; i < PorIntroducir; i ++)
    {
      printf ("¿Cual es el numero? ");
      scanf ("%d", &Valor);
      Inserta (Numeros, Valor, &Introducidos);
      Imprime (Numeros, Introducidos);
    }
}  

void Inserta (int Lista [], int Numero, int *Insertados)
{
  int i, j;
  i = 0;
  while ((i < *Insertados) && (Numero > Lista [i]))
    i ++;
  if (i < *Insertados)
    {
      for (j = *Insertados; j > i; j--)
	Lista [j] = Lista [j-1];
    }
      Lista [i] = Numero;
      (*Insertados) ++;
}

void Imprime (int Lista [], int Insertados)
{
  int i;
  for (i = 0; i < Insertados; i ++)
    printf ("%d\n", Lista [i]);
}
