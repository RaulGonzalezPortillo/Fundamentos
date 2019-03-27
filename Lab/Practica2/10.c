#include <stdio.h>
#include <string.h>

void ValidacionYNoDias (int d, int m, int a, int *validez, int *nodias);

int main (void)
{
  int Validez1, Validez2, D1, D2, M1, M2, A1, A2, NoDias1, NoDias2, Diferencia, ErrorLectura = 0;
  do
    {
      printf ("Introduzca la fecha menor con formato DD/MM/AAAA\n");
      if (scanf ("%d/%d/%d", &D1, &M1, &A1) != 3)
	ErrorLectura = 1;
      printf ("Introduzca la fecha mayor con formato DD/MM/AAAA\n");
      if (scanf ("%d/%d/%d", &D2, &M2, &A2) != 3)
	ErrorLectura = 1;
      ValidacionYNoDias (D1, M1, A1, &Validez1, &NoDias1);
      ValidacionYNoDias (D2, M2, A2, &Validez2, &NoDias2);
      if ((Validez1 == 0 || Validez2 == 0) || (NoDias1 > NoDias2) || ErrorLectura == 1)
	printf ("Hay errores:\n");
      if (Validez1 == 0 || Validez2 == 0)
	printf ("- Alguna de las fechas no es valida\n");
      if (NoDias1 > NoDias2)
	printf ("- La fecha 1 es mayor a la fecha 2\n");
      if (ErrorLectura == 1)
	printf ("- Hubo un error de lectura, puede que haya introducido un caracter en sus fechas\n");
    }
  while (Validez1 == 0 || Validez2 == 0 || ErrorLectura == 1);
  Diferencia = NoDias2 - NoDias1;
  if (Diferencia != 0)
    printf ("El numero de dias transcurridos entre la fecha 1 y la fecha 2 es: %d\n", Diferencia);
  else
    printf ("Ha introducido la misma fecha dos veces\n");
}

void ValidacionYNoDias (int d, int m, int a, int *validez, int *nodias)
{
  *validez = 0;
  int diasmes, sumam;
  switch (m)
    {
    case 1:
      diasmes = 31;
      break;
    case 2:
      diasmes = 28;
      break;
    case 3:
      diasmes = 31;
      break;
    case 4:
      diasmes = 30;
      break;
    case 5:
      diasmes = 31;
      break;
    case 6:
      diasmes = 30;
      break;
    case 7:
      diasmes = 31;
      break;
    case 8:
      diasmes = 31;
      break;
    case 9:
      diasmes = 30;
      break;
    case 10:
      diasmes = 31;
      break;
    case 11:
      diasmes = 30;
      break;
    case 12:
      diasmes = 31;
      break;
    }
  switch (m)
    {
    case 1:
      sumam = 0;
      break;
    case 2:
      sumam = 31;
      break;
    case 3:
      sumam = 59;
      break;
    case 4:
      sumam = 90;
      break;
    case 5:
      sumam = 120;
      break;
    case 6:
      sumam = 151;
      break;
    case 7:
      sumam = 183;
      break;
    case 8:
      sumam = 212;
      break;
    case 9:
      sumam = 243;
      break;
    case 10:
      sumam = 273;
      break;
    case 11:
      sumam = 304;
      break;
    case 12:
      sumam = 334;
      break;
    default:
      sumam = 0;
    }
  if (d <= diasmes && d > 0 && m <= 12 && m > 0)
    {
      *validez = 1;
    }
  *nodias = ((a * 365) + (sumam) + (d));
}
