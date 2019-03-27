#include <stdio.h>
#define PI 3.141592

void MostrarMenu (void);
void Cuadrado (float lado, float *area);
void Circulo (float radio, float *area);
void Rectangulo (float base, float altura, float *area);
void Triangulo (float base, float altura, float *area);

int main (void)
{
	float resultado, lado1, lado2;
	int opcion;
	
	do {
	
	MostrarMenu();
	scanf("%d", &opcion);
	switch (opcion)
	{
		case 1:
			printf("Introduzca el radio del circulo: ");
			scanf("%f", &lado1);
			Circulo(lado1, &resultado);
			printf("El area es: %f\n", resultado);
			break;
		case 2:
			printf("Introduzca el lado del cuadrado: ");
			scanf("%f", &lado1);
			Cuadrado(lado1, &resultado);
			printf("El area es: %f\n", resultado);
			break;
		case 3:
			printf("Introduzca la base y la altura del rectangulo: ");
			scanf("%f %f", &lado1, &lado2);
			Rectangulo(lado1,lado2,&resultado);
			printf("El area es: %f\n", resultado);
			break;
		case 4:
			printf("Introduzca la base y la altura del triangulo: ");
			scanf("%f %f", &lado1, &lado2);
			Triangulo(lado1,lado2,&resultado);
			printf("El area es: %f\n", resultado);
			break;
		case 5:
			printf("Gracias, adiós\n");
			break;
		default:
			printf("Opcion invalida, adios");
			break;
	}
	
	} while (opcion !=5);
	
	return 0;
}

void Cuadrado (float lado, float *area)
{
	*area = lado * lado;
}

void Circulo (float radio, float *area)
{
	*area = radio * PI * PI;
}

void Rectangulo (float base, float altura, float *area)
{
	*area = base * altura;
}

void Triangulo(float base, float altura, float *area)
{
	*area = base * altura / 2;
}

void MostrarMenu(void)
{
	printf("\nMenu\n");
	printf("1. Area del circulo\n");
	printf("2. Area del cuadrado\n");
	printf("3. Area del rectangulo\n");
	printf("4. Area del triangulo\n");
	printf("5. Salir\n");
	printf("Opcion; ");
}



