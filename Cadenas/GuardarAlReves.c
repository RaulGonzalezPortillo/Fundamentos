#include <stdio.h>
#include <string.h>

void Leer (char Linea[]);
void ImprimaAlReves (char Linea[]);

int main (void)
{
  char Frase[200], FraseInvertida[200];
  Leer (Frase);
  printf ("La frase es:\n");
  puts (Frase);
  Invertir (Frase, FraseInvertida);
  printf ("La frase invertida es:\n");
  puts (FraseInvertida);
}

void Leer (char Linea[])
{
  printf ("Introduzca una frase de hasta 199 caracteres\n");
  gets (Linea);
}

void Invertir (char Linea[], char LineaInvertida[])
{
  int i, i2 = 0;
  for (i = strlen (Linea) - 1; i >= 0; i --)
    {
      LineaInvertida[i2] = Linea[i];
      i2++;
    }
  LineaInvertida[i2] = '\0';
}
