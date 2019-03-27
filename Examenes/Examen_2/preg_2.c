#include <stdio.h>

void LeerCantidad (int *cantidad);
void LeeTiempoDePistas (int cantidad, int mpista [], int spista []);
void Calcula_mm_ss (int cantidad, int mpista [], int spista [], int *m1, int *s1);
void Calcula_hh_mm_ss (int m1, int s1, int *h2, int *m2, int *s2);
void DespliegaTiempo (int cantidad, int m1, int s1, int h2, int m2, int s2);

int main (void)
{
  int Cantidad, MPista [10], SPista [10], M1, S1, H2, M2, S2;
  LeerCantidad (&Cantidad);
  LeeTiempoDePistas (Cantidad, MPista, SPista);
  Calcula_mm_ss (Cantidad, MPista, SPista, &M1, &S1);
  Calcula_hh_mm_ss (M1, S1, &H2, &M2, &S2);
  DespliegaTiempo (Cantidad, M1, S1, H2, M2, S2);
}

void LeerCantidad (int *cantidad)
{
  printf ("Ingrese cuantas pistas quiere procesar:\n");
  scanf ("%d", cantidad);
}
    
void LeeTiempoDePistas (int cantidad, int mpista [], int spista [])
{
  int i;
  printf ("Se leeran %d pistas:\n", cantidad);
  for (i = 0; i < cantidad; i ++)
    {
      printf ("Duracion de la pista %d (en formato mm:ss): \n", i + 1);
      scanf ("%d:%d", &mpista [i], &spista [i]);
    }
}

void Calcula_mm_ss (int cantidad, int mpista [], int spista [], int *m1, int *s1)
{
  int i;
  (*m1) = 0;
  (*s1) = 0;
  for (i = 0; i < cantidad; i ++)
    {
      (*m1) += mpista [i];
      (*s1) += spista [i];
    }
  while (*s1 >= 60)
    {
      (*s1) -= 60;
      (*m1) ++;
    }
}

void Calcula_hh_mm_ss (int m1, int s1, int *h2, int *m2, int *s2)
{
  (*h2) = 0;
  (*m2) = m1;
  (*s2) = s1;
  while ((*m2) >= 60)
    {
      (*m2) -= 60;
      (*h2) ++;
    }
}

void DespliegaTiempo (int cantidad, int m1, int s1, int h2, int m2, int s2)
{
  printf ("La duracion del disco en formato mm:ss es %d:%d\n", m1, s1);
  printf ("La duracion del disco en formato hh:mm:ss es %d:%d:%d\n", h2, m2, s2);
}
