#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct def_dato
{
  int dato;
  struct def_dato *sig;
} tipodato;

void InsertaInicio (tipodato **Inicio, int numero);
void Imprime (tipodato *Inicio);
void BorrarLista (tipodato *Inicio);
void InsertaFin (tipodato **Inicio, int numero);
void SacarPromedio (tipodato *Inicio, float *promedio);
void Buscar (tipodato *Inicio, int buscador, int *encontrado);

int main (void)
{
  tipodato *Primero = NULL;
  int valor, Buscador, Encontrado;
  float Promedio;
  printf ("Inserte numeros (letra para terminar)\n");
  while (scanf ("%d", &valor) == 1)
    InsertaFin (&Primero, valor);
  printf ("Los valores introducidos son: \n");
  Imprime (Primero);
  SacarPromedio (Primero, &Promedio);
  printf ("El promedio fue: %.2f\n", Promedio);
  printf ("Ingrese un numero para buscarlo en la lista: ");
  __fpurge (stdin);
  scanf ("%d", &Buscador);
  Buscar (Primero, Buscador, &Encontrado);
  if (Encontrado == 1)
    printf ("El numero se ha encontrado en la lista\n");
  else
    if (Encontrado == 0)
      printf ("El numero no se ha encontrado en la lista\n");
    else
      printf ("Algo salio horriblemente mal\n");
  BorrarLista (Primero);
}

void InsertaInicio (tipodato **Inicio, int numero)
{
  tipodato *tmp;
  tmp = (tipodato *) malloc (sizeof (tipodato));
  tmp -> dato = numero;
  tmp -> sig = *Inicio;
  *Inicio = tmp;
}

void Imprime (tipodato *Inicio)
{
  tipodato *tmp;
  tmp = Inicio;
  while (tmp != NULL)
    {
      printf ("%d\n", tmp -> dato);
      tmp = tmp -> sig;
    }
}

void BorrarLista (tipodato *Inicio)
{
  tipodato *tmp;
  tmp = Inicio;
  while (tmp != NULL)
    {
      Inicio = Inicio -> sig;
      free (tmp);
      tmp = Inicio;
    }
}

void SacarPromedio (tipodato *Inicio, float *promedio)
{
  tipodato *tmp;
  tmp = Inicio;
  int i = 0;
  *promedio = 0;
  while (tmp != NULL)
    {
      *promedio += tmp -> dato;
      i++;
      tmp = tmp -> sig;
    }
  *promedio /= i;
}

void InsertaFin (tipodato **Inicio, int numero)
{
  tipodato *tmp, *tmp2;
  tmp = (tipodato *) malloc (sizeof (tipodato));
  tmp -> dato = numero;
  tmp -> sig = NULL;
  if (*Inicio != NULL)
    {
      tmp2 = *Inicio;
      while (tmp2 -> sig != NULL)
	tmp2 = tmp2 -> sig;
      tmp2 -> sig = tmp;
    }
  else
    {
      *Inicio = tmp;
    }
}

void Buscar (tipodato *Inicio, int buscador, int *encontrado)
{
  tipodato *tmp;
  tmp = Inicio;
  *encontrado = 0;
  while (tmp != NULL)
    {
      if (tmp -> dato == buscador)
	*encontrado = 1;
      tmp = tmp -> sig;
    }
}
