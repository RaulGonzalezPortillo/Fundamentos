#include <stdio.h>

void InvierteFrase (char Cadena [200]);

main ()
{
  char Frase [200];
  printf ("Dame una frase: ");
  gets (Frase);
  printf ("Tu frase invertida es: ");
  InvierteFrase (Frase);
  printf ("\n");
}

void InvierteFrase (char Cadena [200])
{
  if (*Cadena != '\0')
    {
      InvierteFrase (Cadena + 1);
      printf ("%c", *Cadena);
    }
}
