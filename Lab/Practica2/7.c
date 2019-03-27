#include <stdio.h>
#include <string.h>

void QuitarPalabra (char Cadena[]);

int main (void)
{
  char Frase [200];
  printf ("A continuacion, introduzca una frase de 3 palabras\n");
  gets (Frase);
  QuitarPalabra (Frase);
}

void QuitarPalabra (char Cadena[])
{
  int i, Palabra;
  Palabra = 1;
  for (i = 0; i < (strlen(Cadena)); i ++)
    {
      if (Cadena [i] != ' ' && (Palabra == 1 || Palabra == 3))
	printf ("%c", Cadena [i]);
      if (Cadena [i] == ' ' && (Cadena [i - 1]) != ' ')
	{
	  Palabra ++;
	  if (Palabra == 3)
	    printf (" ");
	}
    }
  printf ("\n");
}
