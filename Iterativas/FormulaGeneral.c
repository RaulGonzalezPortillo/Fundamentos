#include <stdio.h>
#include <math.h>

void SolicitarValores (float *a, float *b, float *c);
void FormulaGeneral (float a, float b, float c, float *x1, float *x2, int *error);
void ImprimirResultados (float x1, float x2, int error);

int main (void)
{
  char Repetidor;
  float A, B, C, X1, X2;
  int Error = 0;
  do
    {
      SolicitarValores (&A, &B, &C);
      if (A != 0)
	{
	  FormulaGeneral (A, B, C, &X1, &X2, &Error);
	  ImprimirResultados (X1, X2, Error);
	}
      else
	{
	  printf ("\nNo se puede realizar la operacion");
	}
      printf ("\nPresione 's' o 'S' para repetir el programa, cualquier otra tecla terminara el programa\n");
      __fpurge(stdin);
      scanf ("%c", &Repetidor);
    }
  while (Repetidor == 's' || Repetidor == 'S');
}

void SolicitarValores (float *a, float *b, float *c)
{
  printf("\nIntroduzca el valor de A\n");
  __fpurge(stdin);
  scanf("%f", a);
  printf("\nIntroduzca el valor de B\n");
  __fpurge(stdin);
  scanf("%f", b);
  printf("\nIntroduzca el valor de C\n");
  __fpurge(stdin);
  scanf("%f", c);
}

void FormulaGeneral (float a, float b, float c, float *x1, float *x2, int *error)
{
  *error = 0;
  if (((b * b) - (4 * a * c)) >= 0)
    {
      *x1 = (- b + sqrt (b * b - (4 * a * c))) / (2 * a);
      *x2 = (- b - sqrt (b * b - (4 * a * c))) / (2 * a);
    }
  else
    *error = 1;
}

void ImprimirResultados (float x1, float x2, int error)
{
  if (error == 0)
    {
      printf ("\nx1 = %f\n", x1);
      printf ("\nx2 = %f\n", x2);
    }
  if (error == 1)
    {
      printf ("\nNo se puede resolver\n");
    }
}
