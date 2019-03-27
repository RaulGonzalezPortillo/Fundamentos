#include <stdio.h>
#include <string.h>

void Invertir (char Cadena []);

int main (void)
{
  char Frase [200];
  printf ("Ingrese una frase\n");
  gets (Frase);
  Invertir (Frase);
}

void Invertir (char Cadena [])
{
  int i, j, Longitud;
  Longitud = strlen (Cadena);
  for (i = Longitud - 1; i >= 0; i --)
    {
      if (Cadena [i] == ' ')
	{
	  for (j = i + 1; Cadena [j] != '\0' && Cadena [j] != ' '; j ++)
	    {
	      printf ("%c", Cadena [j]);
	    }
	  printf(" ");
	}
    }
  for (i = 0; Cadena [i] != ' ' && Cadena [i] != '\0'; i ++)
    printf ("%c", Cadena [i]);
  printf ("\n");
}
