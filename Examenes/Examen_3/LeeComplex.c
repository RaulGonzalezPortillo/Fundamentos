#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv [])
{
  FILE *ArchivoResultados;
  char Renglon [100];

  if (argc != 2)
    {
      printf ("Error: demasiados o muy pocos argumentos.\n");
      printf ("Uso del programa: ./LeeComplex NombreArchivo (Con ext.)\n");
      exit (0);
    }

  ArchivoResultados = fopen (argv [1], "rt");
  if (ArchivoResultados == NULL)
    {
      printf ("No se encontró el archivo\n");
      printf ("Saliendo...n");
      exit (0);
    }

  printf ("Las operaciones del archivo son:\n");
  while (fgets (Renglon, 300, ArchivoResultados) != NULL)
    {
      Renglon [strlen (Renglon) - 1] = '\0';
      puts (Renglon);
    }
  fclose (ArchivoResultados);
}
