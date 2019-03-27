#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct defAlumno
{
  char Nombre [30];
  char Cuenta [15];
  float Cal1, Cal2, Cal3;
} tipoAlumno;

void LeerDatos (tipoAlumno alumnos []);
void ImprimirYPromedio (tipoAlumno alumnos []);

int main (void)
{
  tipoAlumno Alumnos [5];
  printf ("A continuacion se leeran los datos de 5 alumnos:\n");
  LeerDatos (Alumnos);
  printf ("Estos son los datos que se leyeron:\n");
  ImprimirYPromedio (Alumnos);
}

void LeerDatos (tipoAlumno alumnos [])
{
  int i;
  for (i = 0; i < 5; i ++)
    {
      printf ("Alumno #%d:\n", i + 1);
      printf ("\tNombre: ");
      __fpurge (stdin);
      gets (alumnos [i]. Nombre);
      printf ("\tNumero de cuenta: ");
      __fpurge (stdin);
      gets (alumnos [i]. Cuenta);
      printf ("\tCalificacion 1: ");
      scanf ("%f", &alumnos [i]. Cal1);
      printf ("\tCalificacion 2: ");
      scanf ("%f", &alumnos [i]. Cal2);
      printf ("\tCalificacion 3: ");
      scanf ("%f", &alumnos [i]. Cal3);
    }
}

void ImprimirYPromedio (tipoAlumno alumnos [])
{
  int i;
  for (i = 0; i < 5; i ++)
    {
      system ("sleep 0.05");
      printf ("Alumno #%d:\n", i + 1);
      system ("sleep 0.05");
      printf ("\tNombre: ");
      system ("sleep 0.05");
      puts (alumnos [i]. Nombre);
      system ("sleep 0.05");
      printf ("\tNumero de cuenta: ");
      system ("sleep 0.05");
      puts (alumnos [i]. Cuenta);
      system ("sleep 0.05");
      printf ("\tCalificacion 1: %.2f\n", alumnos [i]. Cal1);
      system ("sleep 0.05");
      printf ("\tCalificacion 2: %.2f\n", alumnos [i]. Cal2);
      system ("sleep 0.05");
      printf ("\tCalificacion 3: %.2f\n", alumnos [i]. Cal3);
      system ("sleep 0.05");
      printf ("\tCalificacion Promedio: %.2f\n", (alumnos [i]. Cal1 + alumnos [i]. Cal2 + alumnos [i]. Cal3) / 3);
      system ("sleep 0.05");
    }
}
