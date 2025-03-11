/* 
	EXERCICIO 7
	Faca um programa que leia dois arquivos resp.txt e gabarito.txt e imprima 
	"SIM" se forem iguais, ou "NAO", caso contrario. ATENCAO! Desconsidere 
	espacos em branco e mudancas maiuscula/minuscula
*/
#include <stdio.h> // scanf, printf
#include <stdlib.h> // malloc, free, NULL, FILE, fopen, fclose
#include <stdbool.h> // bool, true, false

int main()
{
	char char_resp = '\0', char_gab = '\0'; // Char lidos em cada arquivo
	FILE *resp = NULL, *gab = NULL; // Resposta e Gabarito

	resp = fopen("resp.txt", "r");
	if(resp == NULL)
	{
		printf("ERRO! Nao foi possivel abrir o arquivo \"resp.txt\"\n");
		return 1;
	}
	gab = fopen("gabarito.txt", "r");
	if(gab == NULL)
	{
		fclose(resp); // Se chegou aqui, resp abriu o arquivo, e temos de fechar
		printf("ERRO! Nao foi possivel abrir o arquivo \"gabarito.txt\"\n");
		return 1;
	}

	// Pega o 1o char de cada arquivo
	char_resp = fgetc(resp);
	char_gab = fgetc(gab);
	// Enquanto houver caractere para ser lido dos dois arquivos
	while((char_resp != EOF) && (char_gab != EOF))
	{
		while((char_resp != EOF) && // Enquanto nao chegou no fim ou e branco e similares
					((char_resp == '\n') || (char_resp == ' ') || (char_resp == '\r')))
		{
			char_resp = fgetc(resp); // Pega o proximo
		}
		while((char_gab != EOF) && // Enquanto nao chegou no fim ou e branco e similares
					((char_gab == '\n') || (char_gab == ' ') || (char_gab == '\r')))
		{
			char_gab = fgetc(gab); // Pega o proximo
		}

		// Se for uma letra maiuscula
		if((char_resp >= 'A') && (char_resp <= 'Z'))
		{
			char_resp += 32; // Joga pra minuscula
		}
		// Se for uma letra maiuscula
		if((char_gab >= 'A') && (char_gab <= 'Z'))
		{
			char_gab += 32; // Joga pra minuscula
		}

		// Se forem diferentes, pode parar pois nao tem porque continuar
		if(char_gab != char_resp) { break; }
		else
		{
			// Continua a olhar os proximos
			char_resp = fgetc(resp);
			char_gab = fgetc(gab);
		}
	}

	// Se ambos nao terminaram no fim de cada arquivo
	if((char_resp != char_gab) && ((char_gab == EOF) || (char_resp == EOF)))
	{
		printf("NAO\n"); // Um terminou antes do outro, logo sao diferentes
	}
	else
	{
		printf("SIM\n"); // Se terminaram juntos, sao iguais
	}

	fclose(resp);
	fclose(gab);

	return 0;
}