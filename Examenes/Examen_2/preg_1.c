#include <stdio.h>
#include <string.h>

void LeerFrase (char Cadena []);
void CalcularEspacios (char Cadena [], int *espacios);
void CalcularPalabras (char Cadena [], int *palabras);
void TiposDeLetras (char Cadena [], int *letras, int *minusculas, int *mayusculas);
void Imprimir (int letras, int espacios, int palabras, int minusculas, int mayusculas);

int main (void)
{
  char Frase [200];
  int Letras, Espacios, Palabras, Minusculas, Mayusculas;
  LeerFrase (Frase);
  CalcularEspacios (Frase, &Espacios);
  CalcularPalabras (Frase, &Palabras);
  TiposDeLetras (Frase, &Letras, &Minusculas, &Mayusculas);
  Imprimir (Letras, Espacios, Palabras, Minusculas, Mayusculas);
}

void LeerFrase (char Cadena [])
{
  printf ("A continuacion, introduzca una frase para determinar la cantidad de\n");
  printf ("- Palabras\n");
  printf ("- Letras\n");
  printf ("- Letras minusculas\n");
  printf ("- Letras mayusculas\n");
  printf ("- Espacios\n");
  printf ("Que esta tiene:\n");
  gets (Cadena);
}

void CalcularEspacios (char Cadena [], int *espacios)
{
  int i;
  *espacios = 0;
  for (i = 0; i < strlen (Cadena); i ++)
    {
      if (Cadena [i] == ' ')
	(*espacios) ++;
    }
}

void CalcularPalabras (char Cadena [], int *palabras)
{
  int i;
  *palabras = 0;
  if (Cadena [0] != ' ')
    (*palabras) ++;
  for (i = 0; i < strlen (Cadena) - 1; i ++)
    {
      if (Cadena [i] == ' ' && Cadena [i + 1] != ' ')
	(*palabras) ++;
    }
}

void TiposDeLetras (char Cadena [], int *letras, int *minusculas, int *mayusculas)
{
  int i;
  *letras = 0;
  *minusculas = 0;
  *mayusculas = 0;
  for (i = 0; i < strlen (Cadena); i ++)
    {
      if ((Cadena [i] >= 'a' && Cadena [i] <= 'z') || (Cadena [i] >= 'A' && Cadena [i] <= 'Z'))
	(*letras) ++;
      if (Cadena [i] >= 'a' && Cadena [i] <= 'z')
	(*minusculas) ++;
      if (Cadena [i] >= 'A' && Cadena [i] <= 'Z')
	(*mayusculas) ++;
    }
}

void Imprimir (int letras, int espacios, int palabras, int minusculas, int mayusculas)
{
  printf ("En la frase introducida se encontraron:\n");
  printf ("* %d espacio(s)\n", espacios);
  printf ("* %d palabra(s)\n", palabras);
  printf ("* %d letra(s)\n", letras);
  printf ("* %d letra(s) minuscula(s)\n", minusculas);
  printf ("* %d letra(s) mayuscula(s)\n", mayusculas);
}

