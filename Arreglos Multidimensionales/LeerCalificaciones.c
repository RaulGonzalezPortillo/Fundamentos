#include <stdio.h>

void LeerCals (float Cals[10][3]);
void ImprimeCals (float Cals[10][3]);

int main (void)
{
  float Grupo[10][3];
  LeerCals (Grupo);
  ImprimeCals (Grupo);
}

void LeerCals (float Cals[10][3])
{
  int i, j;
  for (i = 0; i < 10; i ++)
    {
      printf ("Introduzca las calificaciones del alumno %d\n", i + 1);
      for (j = 0; j < 3; j ++;)
	{
	  printf ("Calificacion %d: ", j++);
	  scanf ("%f", &Cals[i][j]);
	}
    }
}

void ImprimeCals (float Cals[10][3])
{
  int i, j;
  for (i = 0; i < 10; i ++)
    {
      printf ("Las calificaciones del alumno %d son:", i + 1);
      for (j = 0; j < 3; j ++)
	printf ("%f\t", Cals [i][j]);
      printf ("\n");
    }
}
