/* 
	EXERCICIO 6
	Faça um programa que verifique se uma string e o reverso da outra. ATENCAO!
	O tamanho máximo de caracteres é 1024 e nao pode usar a biblioteca string.h
	nem o operador []
*/
#include <stdio.h> // scanf, printf
#include <stdlib.h> // malloc, free, NULL
#include <stdbool.h> // bool, true, false

int main()
{
	int i = 0, num_chars = 0; // Indices e qtd de chars
	char *s1 = NULL, *s2 = NULL;

	// Alocando memoria
	scanf("%d%*c", &num_chars);
	/* 
		Estou assumindo que possuem tamanhos iguais pois, se nao fosse assim, bastava
		olhar que os tamanhos nao batem. Se baterem, entao a gente faz o procedimento
		abaixo
	*/
	s1 = (char*)malloc(num_chars * sizeof(char));
	s2 = (char*)malloc(num_chars * sizeof(char));

	scanf("%s", s1);
	scanf("%s", s2);

	// Continua até acabar os chars, olhando uma ponta com a outra
	while((i < num_chars) && ((*(s1 + i)) == (*(s2 + num_chars - i - 1)))) 
	{ 
		i++;
	} 

	if(i < num_chars) // Parou antes == Tem um char que nao bateu
	{
		printf("NAO\n");
	}
	else 
	{
		printf("SIM\n");
	}

	// Liberando memoria
	free(s1);
	free(s2);

	return 0;
}