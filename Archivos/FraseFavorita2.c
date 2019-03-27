#include <stdio.h>

int main (void)
{
  FILE *Archivo;
  char Frase [200], NombreArchivo [200];
  printf ("Dame el nombre del archivo que quieres crear: ");
  gets (NombreArchivo);
  Archivo = fopen (NombreArchivo, "at");
  printf ("Dame tu frase favorita:\n");
  gets (Frase);
  fprintf (Archivo, "Tu frase favorita es:\n%s\n", Frase);
  fclose (Archivo);
}
