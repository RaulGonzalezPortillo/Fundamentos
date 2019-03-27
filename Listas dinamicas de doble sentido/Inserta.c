#include <stdio.h>
#include <stdlib.h>

typedef struct def_dato
{
  int dato;
  struct def_dato *sig;
  struct def_dato *ant;
} tipodato;

void InsertaFin (tipodato **Inicio, int numero);
void InsertaInicio (tipodato **Inicio, int numero);
void Imprimir (tipodato *Inicio);
void ImprimirAlReves (tipodato *Inicio);
void BorrarLista (tipodato *Inicio);

int main (void)
{
  int valor;
  tipodato *Primero = NULL;
  printf ("Inserte numeros para imprimirlos al derecho y al revés (letra para terminar)\n");
  while (scanf (" %d", &valor) == 1)
    InsertaFin (&Primero, valor);
  Imprimir (Primero);
  ImprimirAlReves (Primero);
  BorrarLista (Primero);
}

void InsertaInicio (tipodato **Inicio, int numero)
{
  tipodato *tmp;
  tmp = (tipodato *) malloc (sizeof (tipodato));
  tmp -> dato = numero;
  tmp -> ant = NULL;
  tmp -> sig = *Inicio;
  if (*Inicio != NULL)
    (*Inicio) -> ant = tmp;
  *Inicio = tmp;
}

void InsertaFin (tipodato **Inicio, int numero)
{
  tipodato *tmp, *tmp2;
  tmp = (tipodato*) malloc (sizeof (tipodato));
  tmp -> dato = numero;
  tmp -> sig = NULL;
  if (*Inicio != NULL)
    {
      tmp2 = *Inicio;
      while (tmp2 -> sig != NULL)
	tmp2 = tmp2 -> sig;
      tmp2 -> sig = tmp;
      tmp -> ant = tmp2;
    }
  else
    {
      tmp -> ant = NULL;
      *Inicio = tmp;
    }
}

void Imprimir (tipodato *Inicio)
{
  tipodato *tmp;
  tmp = Inicio;
  while (tmp != NULL)
    {
      printf ("%d\n", tmp -> dato);
      tmp = tmp -> sig;
    }
}

void ImprimirAlReves (tipodato *Inicio)
{
  tipodato *tmp;
  tmp = Inicio;
  while (tmp->sig != NULL)
    {
      tmp = tmp -> sig;
    }
  while (tmp != NULL)
    {
      printf ("%d\n", tmp -> dato);
      tmp = tmp -> ant;
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
