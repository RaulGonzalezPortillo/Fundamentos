#include <stdio.h>

void ConversorLibrasAKilos (float libras, float *kilos);
void ConversorKilosAGramos (float kilos, float *gramos);

int main (void)
{
  float Libras, Kilos, Gramos;
  printf ("Introduzca el peso en libras para realizar la conversion\n");
  scanf ("%f", &Libras);
  ConversorLibrasAKilos (Libras, &Kilos);
  ConversorKilosAGramos (Kilos, &Gramos);
  printf ("El peso en kilos es: %fkg\n", Kilos);
  printf ("El peso en Gramos es: %fg\n", Gramos);
}

void ConversorLibrasAKilos (float libras, float *kilos)
{
  *kilos = libras * 0.453592;
}

void ConversorKilosAGramos (float kilos, float *gramos)
{
  *gramos = kilos * 1000;
}
