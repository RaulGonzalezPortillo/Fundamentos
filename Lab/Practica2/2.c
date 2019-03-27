#include <stdio.h>

void LeerArreglo (int Datos[], int Cantidad);
void MediaArreglo (int Datos[], int Cantidad, int *Media);
void SobreBajoMedia (int Datos[], int Cantidad, int Media, int *SobreMedia, int *BajoMedia);

int main (void)
{
  int Cantidad, Temperaturas[100], MediaTemperaturas, TempsSobreMedia, TempsBajoMedia;
  do
    {
      printf ("Introduzca la cantidad de temperaturas a procesar (De 5 a 100): ");
      scanf ("%d", &Cantidad);
      if (Cantidad < 5 || Cantidad > 100)
	printf ("Se ha especificado una cantidad de temperaturas invalida\n");
    }
  while (Cantidad < 5 || Cantidad > 100);
  LeerArreglo (Temperaturas, Cantidad);
  MediaArreglo (Temperaturas, Cantidad, &MediaTemperaturas);
  printf ("La media aritmetica de las temperaturas introducidas es: %d°C\n", MediaTemperaturas);
  SobreBajoMedia (Temperaturas, Cantidad, MediaTemperaturas, &TempsSobreMedia, &TempsBajoMedia);
  printf ("La cantidad de temperaturas sobre la media es igual a %d\n", TempsSobreMedia);
  printf ("La cantidad de temperaturas bajo la media es igual a %d\n", TempsBajoMedia);
}

void LeerArreglo (int Datos[], int Cantidad)
{
  for (int i = 0; i < Cantidad; i ++)
    {
      printf ("Introduzca el dato #%d: ", i + 1);
      scanf ("%d", &Datos [i]);
    }
}

void MediaArreglo (int Datos[], int Cantidad, int *Media)
{
  *Media = 0;
  for (int i = 0; i < Cantidad; i ++)
    {
      *Media += Datos [i];
    }
  *Media /= Cantidad;
}

void SobreBajoMedia (int Datos[], int Cantidad, int Media, int *SobreMedia, int *BajoMedia)
{
  *SobreMedia = 0;
  *BajoMedia = 0;
  for (int i = 0; i < Cantidad; i ++)
    {
      if (Datos [i] < Media)
	*BajoMedia += 1;
      if (Datos [i] > Media)
	*SobreMedia +=1;
    }
}
