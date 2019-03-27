#include <stdio.h>

int main (void)
{
  int NumAlumno, NumCalificacion;
  float Promedio, Calificacion;
  float PromedioGrupal = 0;
  for (NumAlumno = 1; NumAlumno <= 20; NumAlumno++)
    {
      Promedio = 0;
      for (NumCalificacion = 1; NumCalificacion <= 3; NumCalificacion++)
	{
	  printf ("Ingresa tu calificacion numero %d\n", NumCalificacion);
	  scanf ("%f", &Calificacion);
	  Promedio += Calificacion;
	}
      Promedio /= 3;
      printf ("El promedio del alumno %d fue de %f\n", NumAlumno, Promedio);
      PromedioGrupal += Promedio;
    }
  PromedioGrupal /= 20;
  printf ("El promedio del grupo es de %f\n", PromedioGrupal);
}
