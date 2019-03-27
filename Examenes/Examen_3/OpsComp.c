#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  int Real;
  int Imaginario;
} tipo_complejo;

void ConvertirEntrada (char argv [], char *Operacion, tipo_complejo NumerosComplejos []);
void Sumar (tipo_complejo NumerosComplejos [], tipo_complejo *Resultado);
void Restar (tipo_complejo NumerosComplejos [], tipo_complejo *Resultado);
void Multiplicar (tipo_complejo NumerosComplejos [], tipo_complejo *Resultado);
void ImprimirResultado (tipo_complejo Resultado);

int main (int argc, char *argv [])
{
  char NombreArchivo [500], Operacion;
  tipo_complejo NumerosComplejos [2], Resultado;
  if (argc != 3)
    {
      printf ("Error: demasiados o muy pocos argumentos.\n");
      printf ("Uso del programa: ./OpsComp.exe Operacion [n+ni]signo[n+ni] NombreArchivo (Sin ext.)\n");
      exit (0);
    }
  ConvertirEntrada (argv [1], &Operacion, NumerosComplejos);
  switch (Operacion)
    {
    case '+':
      Sumar (NumerosComplejos, &Resultado);
      break;
    case '-':
      Restar (NumerosComplejos, &Resultado);
      break;
    case 'x':
      Multiplicar (NumerosComplejos, &Resultado);
      break;
    default:
      printf ("Ha introducido una operación no disponible, saliendo...\n");
      exit (0);
      break;
    }
  ImprimirResultado (Resultado);
  strcpy (NombreArchivo, argv [2]);
  strcat (NombreArchivo, ".txt");
  FILE *ArchivoResultados;
  ArchivoResultados = fopen (NombreArchivo, "at");
  fprintf (ArchivoResultados, "(%d%+di)%c(%d%+di) = %d%+di\n", NumerosComplejos [0].Real, NumerosComplejos [0].Imaginario, Operacion, NumerosComplejos [1].Real, NumerosComplejos [1].Imaginario, Resultado.Real, Resultado.Imaginario);
  fclose (ArchivoResultados);
}

void ConvertirEntrada (char argv [], char *Operacion, tipo_complejo NumerosComplejos [])
{
  sscanf (argv, "[%d%di]%c[%d%di]", &NumerosComplejos [0].Real, &NumerosComplejos [0].Imaginario, Operacion, &NumerosComplejos [1].Real, &NumerosComplejos [1].Imaginario);
}

void Sumar (tipo_complejo NumerosComplejos [], tipo_complejo *Resultado)
{
  Resultado -> Real = NumerosComplejos [0].Real + NumerosComplejos [1].Real;
  Resultado -> Imaginario = NumerosComplejos [0].Imaginario + NumerosComplejos [1].Imaginario;
}

void Restar (tipo_complejo NumerosComplejos [], tipo_complejo *Resultado)
{
  Resultado -> Real = NumerosComplejos [0].Real - NumerosComplejos [1].Real;
  Resultado -> Imaginario = NumerosComplejos [0].Imaginario - NumerosComplejos [1].Imaginario;
}

void Multiplicar (tipo_complejo NumerosComplejos [], tipo_complejo *Resultado)
{
  Resultado -> Real = (NumerosComplejos [0].Real * NumerosComplejos [1].Real) - (NumerosComplejos [0].Imaginario * NumerosComplejos [1].Imaginario);
  Resultado -> Imaginario = (NumerosComplejos [0].Real * NumerosComplejos [1].Imaginario) + (NumerosComplejos [0].Imaginario * NumerosComplejos [1].Real);
}

void ImprimirResultado (tipo_complejo Resultado)
{
  printf ("El resultado es: %d%+di\n", Resultado.Real, Resultado.Imaginario);
}
