#include <stdio.h>

int main(void) {

    int vetor[10], vetortemp[101], op, index, soma, min, max, rot, rep;
    float med;

    for (int i = 0; i < 10; i++) {
      scanf("%d%*c", &vetor[i]);
    }

    scanf("%d%*c", &op);

    while (op != 0) {

        switch (op) {

            case 1: // Atualizar vetor com base no indice inserido
                scanf("%d%*c", &index);
                scanf("%d%*c", &vetor[index]);
            break;

            case 2: // Listar numeros do vetor na ordem
                for (int i = 0; i < 10; i++) {
                    printf("%d ", vetor[i]);
                }
                printf("\n");
            break;

            case 3: // Listar numeros do vetor na ordem invertida
                for (int i = 9; i >= 0; i--) {
                    printf("%d ", vetor[i]);
                }
                printf("\n");
            break;

            case 4: // Somar cada item do vetor na variavel soma
                soma = 0;
                for (int i = 0; i < 10; i++) {
                    soma += vetor[i];
                }
                printf("%d\n", soma);
            break;

            case 5: // Contar quantos numeros estão repetidos
                rep = 0;
                for (int i = 0; i <= 100; i++) { // Zerar vetor temporário
                    vetortemp[i] = 0;
                }
                for (int i = 0; i < 10; i++) { // Contar numeros no vetor temporário
                    vetortemp[vetor[i]]++;
                }
                for (int i = 0; i <= 100; i++) { // Contar numeros que repetem
                    if (vetortemp[i] > 1) {
                        rep++;
                    }
                }
                printf("%d\n", rep);
            break;

            case 6:
                for (int i = 0; i <= 100; i++) { // Zerar vetor temporário
                    vetortemp[i] = 0;
                }
                for (int i = 0; i < 10; i++) { // Contar numeros no vetor temporário
                    vetortemp[vetor[i]]++;
                }
                for (int i = 0; i <= 100; i++) { // Listar números que aparecem
                    if (vetortemp[i] != 0) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
            break;

            case 7:
                for (int i = 0; i <= 100; i++) { // Zerar vetor temporário
                    vetortemp[i] = 0;
                }
                for (int i = 0; i < 10; i++) { // Contar numeros no vetor temporário
                    vetortemp[vetor[i]]++;
                }
                for (int i = 0; i <= 100; i++) { // Listar números que aparecem e quantas vezes apareceram
                    if (vetortemp[i] != 0) {
                        printf("%d:%d ", i, vetortemp[i]);
                    }
                }
                printf("\n");
            break;

            case 8:
                min = 100;
                med = 0;
                max = 0;
                for (int i = 0; i < 10; i++) {
                    if (vetor[i] < min) { // Se for o menor, salvar
                        min = vetor[i];
                    }
                    if (vetor[i] > max) { // Se for o maior, salvar
                        max = vetor[i];
                    }
                    med += ((float)vetor[i]/10); //Somar cada número dividido por 10 para calcular média
                }
                printf("%d %d %.2f\n", min, max, med); // Printar tudo
            break;

            case 9:
                for (int i = 0; i <= 100; i++) { // Zerar vetor temporário
                    vetortemp[i] = 0;
                }
                for (int i = 0; i < 10; i++) { // Contar numeros no vetor temporário
                    vetortemp[vetor[i]]++;
                }
                printf("P: ");
                for (int i = 0; i <= 100; i++) { // Listar numeros caso sejam pares
                    if (vetortemp[i] != 0 && i % 2 == 0) {
                        printf("%d ", i);
                    }
                }
                printf("I: ");
                for (int i = 0; i <= 100; i++) { // Listar numeros caso sejam impares
                    if (vetortemp[i] != 0 && i % 2 == 1) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
            break;

            case 10:
                scanf("%d%*c", &rot);
                rot = rot % 10; // Corrigir fator
                for (int i = rot; i < 10; i++) { // Listar números a partir do fator
                    printf("%d ", vetor[i]);
                }
                for (int i = 0; i < 10 - (10 - rot); i++) { //Listar os números antes antes do fator
                    printf("%d ", vetor[i]);
                }
                printf("\n");
            break;

            case 11:
                scanf("%d%*c", &rot);
                rot = rot % 10; // Corrigir fator
                for (int i = 10 - rot; i < 10; i++) { // Listar números a partir do fator
                    printf("%d ", vetor[i]);
                }
                for (int i = 0; i < 10 - rot; i++) { //Listar os números antes antes do fator
                    printf("%d ", vetor[i]);
                }
                printf("\n");
            break;

            default:
                printf("Opcao Invalida!\n");
            break;

        }

        scanf("%d%*c", &op);

    }

    return 0;

}