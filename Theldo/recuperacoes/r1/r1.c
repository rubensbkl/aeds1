#include "lib.h"

int soma_divisores_impares(int valor) {
    int count = 0;
    int i = 1;
    while (i <= valor) {
        if (valor % i == 0) {
            count++;
        }
        i = i + 2;
    }
    return count;
}

int soma_divisores_pares(int valor) {
    int count = 0;
    int i = 2;
    while (i <= valor) {
        if (valor % i == 0) {
            count++;
        }
        i = i + 2;
    }
    return count;
}

void exercicio01(void) {
    int n = 0;
    n = IO_readint("n = ");
    int soma_impares = 0;
    int soma_pares = 0;
    for (int i = 0; i < n; i++) {
        int x = 0;
        x = IO_readint("x = ");
        soma_impares = soma_divisores_impares(x); 
        soma_pares = soma_divisores_pares(x);
        if (soma_impares > soma_pares) {
            IO_printf("Mais divisores impares\n");
        } else if (soma_impares < soma_pares) {
            IO_printf("Mais divisores pares\n");
        } else {
            IO_printf("Mesma quantidade de divisores\n");
        }
    }
}

bool primo(int valor) {
    bool primo = true;
    if (valor <= 1) {
        primo = false;
    }

    for (int i = 2; i <= sqrt(valor); i++) {
        if (valor % i == 0) {
            primo = false;
        }
    }

    return primo;
}

void exercicio02(void) {
    int n = 0;

    n = IO_readint("Digite a quantidade: ");

    for (int i = 0; i < n; i++)
    {
        int valor = 0;

        valor = IO_readint("Digite o valor: ");

        if (primo(valor)) printf("E primo\n");
        else printf("Nao e primo\n");
    }
}

chars qualSimbolo(char simbolo) {
    if (simbolo == '&' || simbolo == '|' || simbolo == '!') {
        return "Logico";
    } else if (simbolo == '+' || simbolo == '-' || simbolo == '*' || simbolo == '/' || simbolo == '%') {
        return "Aritmetico";
    } else if (simbolo == '>' || simbolo == '<' || simbolo == '=') {
        return "Relacional";
    } else if (simbolo == ' ' || simbolo == '.' || simbolo == ';' || simbolo == ':' || simbolo == '_') {
        return "Separadores";
    } else {
        return "Erro";
    }
}

void exercicio03(void){
    chars sequencia;
    sequencia = IO_readstring("Digite a sequencia: ");
    for(int i = 0; i < strlen(sequencia); i++ ){
        printf("%c: %s\n", sequencia[i], qualSimbolo(sequencia[i]));
    }
}

bool noIntervalo(float inferior, float superior, float valor) {
    return (valor >= inferior && valor <= superior);
}

void testar_tipo(char c, int *maiusculas, int *minusculas, int *digitos, int *operadores, int *separadores) {
    if (isupper(c)) {
        (*maiusculas)++;
    } else if (islower(c)) {
        (*minusculas)++;
    } else if (isdigit(c)) {
        (*digitos)++;
    } else if (eh_operador_logico(c) || eh_operador_aritmetico(c) || eh_operador_relacional(c)) {
        (*operadores)++;
    } else if (eh_separador(c)) {
        (*separadores)++;
    }
}

void method_04(void)
{
    char sequencia[50];
    int maiusculas = 0, minusculas = 0, digitos = 0, operadores = 0, separadores = 0;
    printf("Digite a sequencia: \n");
    fgets(sequencia, sizeof(sequencia), stdin);
    sequencia[strcspn(sequencia, "\n")] = 0;
    for(int i = 0; i < strlen(sequencia); i++)
    {
        testar_tipo(sequencia[i], &maiusculas, &minusculas, &digitos, &operadores, &separadores);   
    }
    
    printf("Letras maiusculas: %d\n", maiusculas);
    printf("Letras minusculas: %d\n", minusculas);
    printf("Digitos: %d\n", digitos);
    printf("Operadores: %d\n", operadores);
    printf("Separadores: %d\n", separadores);

}

void exercicio05() {
    int n = 0;
    double menor = 0.0;
    int qtd_men = 0;
    double entre = 0.0;
    int qtd_entre = 0;
    double maior = 0.0;
    int qtd_mai = 0;
    n = IO_readint("Digite a quantidade: ");
    for (int i = 0; i < n; i++) {
        double valor = 0.0;
        valor = IO_readdouble("Digite o valor: ");
        if ( valor < -27.25) {
            printf("tomanocu");
            menor = menor + valor;
            qtd_men++;
        }
        if ( noIntervalo(-27.25, 13.75, valor) ) {
            entre = entre + valor;
            qtd_entre++;
        }
        if ( valor > 91.25) {
            maior = maior + valor;
            qtd_mai++;
        }
    }
    if (qtd_men > 0 && menor/qtd_men < entre/qtd_entre && menor/qtd_men < maior/qtd_mai) {
        IO_printf("Menor: %lf\n", menor/qtd_men);
    } else if (qtd_entre > 0 && entre/qtd_entre < maior/qtd_mai) {
        IO_printf("Menor: %lf\n", entre/qtd_entre);
    } else if (qtd_mai > 0) {
        IO_printf("Maior: %lf\n", maior/qtd_mai);
    } else {
        IO_printf("Nenhum\n");
    }
}

int main(void) {
    int opcao = 0;
    do {
        opcao = IO_readint("Escolha uma opcao: ");
        switch (opcao) {
            case 0: break;
            case 1: exercicio01(); break;
            case 2: exercicio02(); break;
            case 3: exercicio03(); break;
            case 4: exercicio04(); break;
            case 5: exercicio05(); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    IO_printf("Aperte ENTER para finalizar:");
    getchar();
    return 0;
}