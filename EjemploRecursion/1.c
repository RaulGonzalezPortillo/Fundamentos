#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct def_dato
{
  int dato;
  struct def_dato *sig;
} tipodato;

void InsertaInicio (tipodato **Inicio, int numero);
void BorrarLista (tipodato *Inicio);
void Ordenar (tipodato **Inicio);
  
int main (void)
{
  int valor;
  tipodato *Primero = NULL;
  printf ("Inserte numeros (letra para terminar)\n");
  while (scanf ("%d", &valor) == 1)
    InsertaInicio (&Primero, valor);
  Ordenar (&Primero);
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

void Ordenar (tipodato **Inicio)
{
  tipodato *tmp, *tmp2, *acomodador;
  acomodador = *Inicio;
  *Inicio = *Inicio -> sig;
  tmp = *Inicio;
  while ((tmp != NULL) && (numero > tmp -> dato))
    tmp = tmp -> sig;
  if (tmp != NULL)
    {
      if (tmp != *Inicio)
	{
	  tmp2 = *Inicio;
	  while (tmp2 -> sig != tmp)
	    tmp2 = tmp2 -> sig;
	  acomodador -> sig = tmp;
	  tmp2 -> sig = acomodador;
	}
      else
	{
	  acomodador -> sig = *Inicio;
	  *Inicio = acomodador;
	}
    }
  else
    {
      if (*Inicio == NULL)
	{
	  acomodador -> sig = NULL;
	  *Inicio = nuevo;
	}
      else
	{
	  tmp = *Inicio;
	  while (tmp -> sig != NULL)
	    tmp = tmp -> sig;
	  tmp -> sig = acomodador;
	  acomodador -> sig = NULL;
	}
    }
}
