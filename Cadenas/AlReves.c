#include <stdio.h>
#include <string.h>

void Leer (char Linea[]);
void ImprimaAlReves (char Frase[]);

int main (void)
{
  char Frase[200];
  Leer (Frase);
  printf ("La frase es:\n");
  puts (Frase);
  ImprimaAlReves (Frase);
}

void Leer (char Linea[])
{
  printf ("Introduzca una frase de hasta 199 caracteres\n");
  gets (Linea);
}

void ImprimaAlReves (char Frase[])
{
  int i;
  printf ("La frase al reves es: \n");
  for (i = strlen(Frase) - 1; i >= 0; i --)
    printf ("%c", Frase[i]);
  printf ("\n");
}
