#include <stdio.h>

void CalcularArea (float base, float altura, float *area);

int main (void)
{
  float Base, Altura, Area;
  printf ("Introduzca la base y la altura de su triangulo separados por una coma\n");
  scanf ("%f, %f", &Base, &Altura);
  if (Base > 0 || Altura > 0)
    {
      CalcularArea (Base, Altura, &Area);
      printf ("El area es igual a %f\n", Area);
    }
  else
    printf ("El area no se pudo calcular\n");
}

void CalcularArea (float base, float altura, float *area)
{
  *area = (base * altura) / 2;
}
