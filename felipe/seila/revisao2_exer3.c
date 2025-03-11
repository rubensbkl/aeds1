/* 
	EXERCICIO 3
	Faça um programa que leia 3 strings e imprima elas por ordem lexicografica. 
	Não pode usar string.h nem condicionais dentro de laços de repetição.
*/
#include <stdio.h> // scanf, printf
#include <stdlib.h> // malloc, free, NULL
#include <stdbool.h> // bool, true, false

int main()
{
	char 	*s1 = NULL, *s2 = NULL, *s3 = NULL; // string 1, 2 e 3
	int 	tam = 0, // Tamanho das strings
				diff_s1s2 = 0, diff_s1s3 = 0, diff_s2s3 = 0; // Diferenca entre strings

	scanf("%d", &tam);

	// Alocando memoria
	s1 = (char*)malloc(tam * sizeof(char));
	s2 = (char*)malloc(tam * sizeof(char));
	s3 = (char*)malloc(tam * sizeof(char));

	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);

	for(int i = 0; i < tam; ++i)
	{
		diff_s1s2 = (int)s1[i] - (int)s2[i];
		diff_s1s3 = (int)s1[i] - (int)s3[i];
		diff_s2s3 = (int)s2[i] - (int)s3[i];
	}
	
	// s1 imprime quando for <= que s2 e <= s3
	if((diff_s1s2 <= 0) && (diff_s1s3 <= 0)) \
	{
		printf("%s\n", s1);
		// se s1 <= s2 e s1 <= s3 mas s2 <= s3, entao s1 <= s2 <= s3
		if(diff_s2s3 <= 0)
		{
			printf("%s\n%s\n", s2, s3);
		}
		else // entao s1 <= s3 < s2
		{
			printf("%s\n%s\n", s3, s2);
		}
	}
	// s2 imprime quando for <= que s1 e <= s3
	else if((diff_s1s2 >= 0) && (diff_s2s3 <= 0))
	{
		printf("%s\n", s2);
		// se s2 <= s1 e s2 <= s3 mas s1 <= s3, entao s2 <= s1 <= s3
		if(diff_s1s3 <= 0)
		{
			printf("%s\n%s\n", s1, s3);
		}
		else // entao s2 <= s3 < s1
		{
			printf("%s\n%s\n", s3, s1);
		}
	}
	else // imprime s3 pois e <= s1 e <= s2
	{
		printf("%s\n", s3);
		// se s3 <= s1 e s3 <= s2 mas s1 <= s2, entao s3 <= s1 <= s2
		if(diff_s1s2 <= 0)
		{
			printf("%s\n%s\n", s1, s2);
		}
		else // entao s3 <= s2 < s1
		{
			printf("%s\n%s\n", s2, s1);
		}
	}

	// Liberando memoria
	free(s1);
	free(s2);
	free(s3);
	return 0;
}