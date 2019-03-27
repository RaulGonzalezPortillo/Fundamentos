#include <stdio.h>

void LeerMayorYMenor (int Lista[], int *Mayor, int *Menor);
void Imprimir (int Lista[]);
void Promedio (int Lista[]);

int main (void)
{
  int Temperaturas [24], MasAlta, MasBaja;
  LeerMayorYMenor (Temperaturas, &MasAlta, &MasBaja);
  Imprimir (Temperaturas);
  Promedio (Temperaturas);
  printf ("\nLa temperatura mas baja introducida fue: %d\n", MasBaja);
  printf ("\nLa temperatura mas alta introducida fue: %d\n\n", MasAlta);
}

void LeerMayorYMenor (int Lista[], int *Mayor, int *Menor)
{
  printf ("\nA continuacion se leeran las temperaturas del dia\n\n");
  printf ("Introduzca la temperatura de las 0:00 a las 1:00 horas: ");
  scanf ("%d", &Lista[0]);
  *Mayor = Lista[0];
  *Menor = Lista[0];
  for (int i = 1; i < 24; i ++)
    {
      printf ("Introduzca la temperatura de las %d:00 a las %d:00 horas: ", i, i + 1);
      scanf ("%d", &Lista[i]);
      if (Lista[i] > *Mayor)
        *Mayor = Lista[i];
      if (Lista[i] < *Menor)
        *Menor = Lista[i];
    }
}

void Imprimir (int Lista[])
{
  printf ("\nEstas fueron las temperaturas introducidas:\n\n");
  for (int i = 0; i < 24; i ++)
    printf ("De las %d:00 a las %d:00 horas: %d°C\n", i, i + 1, Lista[i]);
}

void Promedio (int Lista[])
{
  float Promedio = 0;
  for (int i = 0; i < 24; i ++)
    Promedio += Lista[i];
  Promedio /= 24;
  printf ("\nEl promedio de las temperaturas introducidas es: %.2f°C\n", Promedio);
}
