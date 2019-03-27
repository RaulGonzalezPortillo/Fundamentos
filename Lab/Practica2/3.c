#include <stdio.h>
#include <string.h>

void Letras (char Cadena []);

int main (void)
{
  char Frase [200];
  printf ("A continuacion, ingrese una frase\n");
  gets (Frase);
  Minusculas (Frase);
  Letras (Frase);
}

void Letras (char Cadena [])
{
  int L [26], Longitud, i, j;
  for (i = 0; i < 26; i ++)
    L [i] = 0;
  Longitud = strlen (Cadena);
  for (i = 0; i < Longitud; i ++)
    for (j = 0; j < 26; j ++)
      if (Cadena [i] == j + 97)
	L [j] ++;
  printf ("Estas son las letras que contenia la frase:\n");
  for (i = 0; i < 26; i ++)
    if (L [i] != 0)
      printf ("Letra %c: %d\n", i + 97, L [i]);
}

void Minusculas (char Cadena [])
{
  int Longitud, i;
  Longitud = strlen (Cadena);
  for (i = 0; i < Longitud; i ++)
    {
      if (Cadena [i] >= 65 && Cadena [i] <= 90)
	Cadena [i] += 32;
    }
}
