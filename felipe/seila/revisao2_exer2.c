/* 
	EXERCICIO 2
	Faça um programa que crie um objeto poligono_regular que possui area, 
	perimetro, e quantidade de lados N. Dado N e lado, fornecido pelo usuario, 
	calcule, armazene e imprima a area e o perimetro da figura. 
	(Utilizando STRUCT e MODULARIZAÇÃO).
*/
#include <stdio.h> // scanf, printf
#include <stdlib.h> // malloc, free, NULL
#include <stdbool.h> // bool, true, false
#include <math.h> // tan, M_PI

struct poligono_regular
{
	int num_lados, lado, perimetro;
	float apotema, angulo, area;
};

void calcular(struct poligono_regular* poligono)
{
	poligono->perimetro = (poligono->lado * poligono->num_lados);
	poligono->angulo = (poligono->num_lados - 2) * 180.0/((float)poligono->num_lados);
	// Apotema = segmento de linha perpendicular saindo do centro até um dos lados
	poligono->apotema = poligono->lado/(2.0*tan(M_PI/(float)poligono->num_lados));
	poligono->area = poligono->perimetro*poligono->apotema/2.0;
}

int main()
{
	struct poligono_regular poligono;
	scanf("%d %d", &(poligono.num_lados), &(poligono.lado));

	calcular(&poligono);

	printf("Perimetro: %d\nAngulo: %.2f\nApotema: %.2f\nArea: %.2f\n",
					poligono.perimetro, poligono.angulo, poligono.apotema, poligono.area);
	return 0;
}