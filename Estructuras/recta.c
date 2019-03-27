#include <stdio.h>

typedef struct Coordenada
{
  float x, y;
} tipoCoordenada;

void LeerCoordenadas (tipoCoordenada Puntos []);
void ObtenerEcuacion (tipoCoordenada Puntos []);

int main (void)
{
  int M, B;
  tipoCoordenada Puntos [2];
  printf ("A continuacion se leeran los dos puntos con el formato 'X, Y':\n");
  LeerCoordenadas (Puntos);
  ObtenerEcuacion (Puntos);
}

void LeerCoordenadas (tipoCoordenada Puntos [])
{
  int i;
  for (i = 0; i < 2; i ++)
    {
      printf ("\tCoordenada %d: ", i + 1);
      scanf ("%f, %f", &Puntos [i].x, &Puntos [i].y);
    }
}

void ObtenerEcuacion (tipoCoordenada Puntos [])
{
  float m, b;
  m = (Puntos[1].y-Puntos[0].y)/(Puntos[1].x-Puntos[0].x);
  b = Puntos[0].y-(m * (Puntos[0].x));
  printf ("Los puntos introducidos fueron (%.2f, %.2f) y (%.2f, %.2f)\n", Puntos[0].x, Puntos [0].y, Puntos [1].x, Puntos [1].y);
  printf ("La ecuacion de la recta es: Y = %.2fX + %.2f\n", m, b);
}
