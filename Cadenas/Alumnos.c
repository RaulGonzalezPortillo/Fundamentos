#include <stdio.h>
#include <string.h>

void Leer (float Notas [20] [3], char Alumnos [20] [50], int Cantidad);
void ImprimirPromedio (float Notas [20] [3], char Nombres [20] [50], int Cantidad);
void BuscarAlumno (float Notas [20] [3], char Nombres [20] [50], int Cantidad);
  
int main (void)
{
  float Calificaciones [20] [3];
  char Nombres [20] [50];
  int Cuantos;
  printf ("Cuantos alumnos tienes?\n");
  __fpurge (stdin);
  scanf ("%d", &Cuantos);
  Leer (Calificaciones, Nombres, Cuantos);
  ImprimirPromedio (Calificaciones, Nombres, Cuantos);
  BuscarAlumno (Calificaciones, Nombres, Cuantos);
}

void Leer (float Notas [20] [3], char Alumnos [20] [50], int Cantidad)
{
  int i, j;
  for (i = 0; i < Cantidad; i ++)
    {
      printf ("Como se llama el alumno %d?\n", i + 1);
      __fpurge (stdin);
      gets (Alumnos [i]);
      for (j = 0; j < 3; j ++)
	{
	  printf ("Cual es la calificacion %d de %s?\n", j + 1, Alumnos [i]);
	  __fpurge (stdin);
	  scanf ("%f", &Notas [i] [j]);
	}
    }
}

void ImprimirPromedio (float Notas [20] [3], char Nombres [20] [50], int Cantidad)
{
  int i, j;
  float Suma = 0;
  for (i = 0; i < Cantidad; i ++)
    {
      Suma = 0;
	for (j = 0; j < 3; j ++)
	  Suma += Notas [i] [j];
      printf ("El promedio de %s es %f\n", Nombres [i], Suma / 3);
    }
}

void BuscarAlumno (float Notas [20] [3], char Nombres [20] [50], int Cantidad)
{
  int i = 0;
  char Alumnos [50];
  printf ("Que alumno buscas?\n");
  __fpurge (stdin);
  gets (Alumnos);
  while ((i < Cantidad) && (strcmp (Alumnos, Nombres [i]) != 0))
    i ++;
  if (i == Cantidad)
    printf ("El alumno no se encontro en la lista\n");
  else
    {
      puts (Nombres [i]);
      printf ("%f\t %f\t %f\t", Notas [i] [0], Notas [i] [1], Notas [i] [2]);
    }
}
