#include <stdio.h>
#include <string.h>

void Leer (float Notas [20] [3], char Alumnos [20] [50], int Cuantos);
void ImprimirPromedio (float Notas [20] [3], char Nombres [20] [50], int Cuantos);
void BuscarAlumno (float Notas [20] [3], char Nombres [20] [50], int Cuantos);
  
int main (void)
{
  int Opcion, Cuantos = 0;
  float Calificaciones [20] [3];
  char Nombres [20] [50];
  do
    {
      printf ("\nBienvenido, escoja una opcion para continuar:\n");
      printf ("1.- Leer las calificaciones de un alumno nuevo\n");
      printf ("2.- Imprimir el promedio de los alumnos registrados en la lista\n");
      printf ("3.- Buscar a un alumno por su nombre en la lista\n");
      printf ("4.- Salir del programa\n");
      scanf ("%d", &Opcion);
      if (Opcion == 1)
	{
	  Leer (Calificaciones, Nombres, Cuantos);
	  Cuantos ++;
	}
      else
	if (Opcion == 2)
	  ImprimirPromedio (Calificaciones, Nombres, Cuantos);
	else
	  if (Opcion == 3)
	    BuscarAlumno (Calificaciones, Nombres, Cuantos);
	  else
	    if (Opcion == 4)
	      printf ("Se ha terminado el programa\n");
	    else
	      printf ("Se ha introducido una opcion invalida\n");
    }
  while (Opcion != 4);
}

void Leer (float Notas [20] [3], char Alumnos [20] [50], int Cuantos)
{
  int i;
  printf ("Como se llama el alumno %d?\n", Cuantos + 1);
  __fpurge (stdin);
  gets (Alumnos [Cuantos]);
  for (i = 0; i < 3; i ++)
    {
      printf ("Cual es la calificacion %d de %s?\n", i + 1, Alumnos [Cuantos]);
      __fpurge (stdin);
      scanf ("%f", &Notas [Cuantos] [i]);
    }
}

void ImprimirPromedio (float Notas [20] [3], char Nombres [20] [50], int Cuantos)
{
  int i, j;
  float Suma = 0;
  for (i = 0; i < Cuantos; i ++)
    {
      Suma = 0;
	for (j = 0; j < 3; j ++)
	  Suma += Notas [i] [j];
      printf ("El promedio de %s es %f\n", Nombres [i], Suma / 3);
    }
}

void BuscarAlumno (float Notas [20] [3], char Nombres [20] [50], int Cuantos)
{
  int i = 0;
  char Alumnos [50];
  printf ("Que alumno buscas?\n");
  __fpurge (stdin);
  gets (Alumnos);
  while ((i < Cuantos) && (strcmp (Alumnos, Nombres [i]) != 0))
    i ++;
  if (i == Cuantos)
    printf ("El alumno no se encontro en la lista\n");
  else
    {
      puts (Nombres [i]);
      printf ("%f\t %f\t %f\t", Notas [i] [0], Notas [i] [1], Notas [i] [2]);
    }
}
