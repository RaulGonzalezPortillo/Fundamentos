#include <stdio.h>

void DeterminacionDeAnhioBisiesto (int anhio, int *anhiobisiesto);
void DeterminacionDeDiasDelMes (int mes, int anhiobisiesto, int *diasdelmes);

int main (void)
{
  int Dia, Mes, Anhio, DiasDelMes, AnhioBisiesto;
  printf ("Ingrese la fecha actual con formato 'DD/MM/AAAA' para calcular cual sera la fecha del dia siguiente\n");
  scanf ("%d/%d/%d", &Dia, &Mes, &Anhio);
  DeterminacionDeAnhioBisiesto (Anhio, &AnhioBisiesto);
  DeterminacionDeDiasDelMes (Mes, AnhioBisiesto, &DiasDelMes);
  Dia++;
  if (Dia > DiasDelMes)
    {
      Dia -= DiasDelMes;
      Mes++;
      if (Mes > 12)
	{
	  Mes -= 12;
	  Anhio++;
	}
    }
  printf ("La fecha del dia siguiente es: %d/%d/%d\n", Dia, Mes, Anhio);
}

void DeterminacionDeAnhioBisiesto (int anhio, int *anhiobisiesto)
{
  if ((anhio % 4) == 0)
    *anhiobisiesto = 1;
  else
    *anhiobisiesto = 0;
}

void DeterminacionDeDiasDelMes (int mes, int anhiobisiesto, int *diasdelmes)
{
  if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    *diasdelmes = 31;
  if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    *diasdelmes = 30;
  if (mes == 2 && anhiobisiesto == 1)
    *diasdelmes = 29;
  if (mes == 2 && anhiobisiesto == 0)
    *diasdelmes = 28;
}
