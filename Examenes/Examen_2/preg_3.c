#include <stdio.h>
#include <string.h>

void LeerDatos (int *numero, int *base);
void Conversion (int numero, int base, int numeroconvertido[], int *longitud);
void Imprimir (int numero, int base, int numeroconvertido[], int longitud);

int main (void)
{
  int Numero, Base, NumeroConvertido [100], Longitud;
  LeerDatos (&Numero, &Base);
  Conversion (Numero, Base, NumeroConvertido, &Longitud);
  Imprimir (Numero, Base, NumeroConvertido, Longitud);
}

void LeerDatos (int *numero, int *base)
{
  printf ("Ingrese un numero en base 10: ");
  scanf ("%d", numero);
  printf ("Ingrese la base a la que lo quiere convertir: ");
  scanf ("%d", base);
}

void Conversion (int numero, int base, int numeroconvertido [], int *longitud)
{
  int no, i;
  i = 0;
  *longitud = 0;
  no = numero;
  while (no > 0)
    {
      numeroconvertido [i] = no % base;
      no /= base;
      i ++;
      (*longitud) ++;
    }
}

void Imprimir (int numero, int base, int numeroconvertido [], int longitud)
{
  int i;
  printf ("El numero %d convertido a base %d es = ", numero, base);
  for (i = longitud - 1; i >= 0; i --)
    {
      if (numeroconvertido [i] == 10)
	printf ("A");
      if (numeroconvertido [i] == 11)
	printf ("B");
      if (numeroconvertido [i] == 12)
	printf ("C");
      if (numeroconvertido [i] == 13)
	printf ("D");
      if (numeroconvertido [i] == 14)
	printf ("E");
      if (numeroconvertido [i] == 15)
	printf ("F");
      if (numeroconvertido [i] >= 0 && numeroconvertido [i] <= 9)
	printf ("%d", numeroconvertido [i]);
    }
  printf ("\n");
}

