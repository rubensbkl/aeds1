#include <stdio.h>
#include <math.h>

// Case 1
int removerPosicao(int num, int pos, int i, int multi) {
    if(num == 0) 
    {
        return 0;
    } else 
    {
        if(i != pos) 
        {
            return (num % 10)* multi + removerPosicao(num / 10, pos, i + 1, multi * 10); // Adicionar caso nao seja a posicao removida
        } else 
        {
            return removerPosicao(num / 10, pos, i + 1, multi); // Ignorar caso seja a posicao removida
        }
    }
}

// Case 2
int inserirDigito(int num, int pos, int dig, int i, int multi) {
    if(num == 0) {
        return 0;
    } else {
        if(i != pos) {
            return (num % 10)* multi + inserirDigito(num / 10, pos, dig, i + 1, multi * 10); // Readicionar numeros ja existentes
        } else {
            return (dig % 10)* multi + inserirDigito(num, pos, dig, i + 1, multi * 10); // Inserir digito escolhido
        }
    }
}

// Case 3
int quantidadeNumeros(int num, int acc){
    if(num == 0){
        return acc;
    }else{
        return quantidadeNumeros(num / 10, acc + 1);  // (*ponteiro para o comentario da atividade 4 que é igual*)
    }
}

// Case 4
int alternarNumeros(int num, int num2, int multi, int resp) {
    if(num <= 0 && num2 <= 0) {
        return resp;
    } else {
        if (num > 0) {
            resp = resp + (num % 10)* multi;
            multi *= 10;
            num /= 10;
        }
        if (num2 > 0) {
            resp = resp + (num2 % 10)* multi;
            multi *= 10;
            num2 /= 10;
        }
        return alternarNumeros(num, num2, multi, resp); // Mesma coisa da calculadora quase estranha (atv 4)
    }
}

// Case 5
int seilaNumeros(int num, int num2, int multi) {
    if (num2 > 0) {
        return seilaNumeros(num, num2 / 10, multi * 10) + (num2 % 10) * multi; //
    } else if (num > 0) {
        return seilaNumeros(0, num / 10, multi * 10) + (num % 10) * multi;
    } else {
        return 0;
    }
}


// Case 6
int inverterNumero(int num) {
    if (num == 0) {
        return 0;
    } else {
        int resto = num % 10;
        int reduzido = num / 10;
        int temp = reduzido;
        int multi = 1;
        while(temp != 0) {
            multi *= 10;
            temp /= 10;
        }
        return resto * multi + inverterNumero(reduzido); // Adicionar proximo numero, somando ao ultimo e invertendo
    }
}

// Case 7
int removerPares(int num, int multi) {
    if(num == 0) {
        return 0;
    } else {
        if(num % 2 != 0) {
            return (num % 10)* multi + removerPares(num / 10, multi * 10); // Se for impar, adicionar
        } else {
            return removerPares(num / 10, multi); // Se for par, ignorar
        }
    }
}

// MAIN
int main() {

    int x, y, z, op;
    
    scanf("%d%*c", &x);
    scanf("%d%*c", &op);

    while (op != 0) {

        switch (op) {

            case 1:
                scanf("%d%*c", &y);
                x = removerPosicao(x, y, 0, 1);
            break;

            case 2:
                scanf("%d%*c", &y);
                scanf("%d%*c", &z);
                x = inserirDigito(x, y, z, 0, 1);
            break;

            case 3:
                printf("%d\n", quantidadeNumeros(x, 0));
            break;

            case 4:
                scanf("%d%*c", &y);
                x = alternarNumeros(x, y, 1, 0);
            break;

            case 5:
                scanf("%d%*c", &y);
                x = seilaNumeros(x, y, 1);
            break;

            case 6:
                x = inverterNumero(x);
            break;

            case 7:
                x = removerPares(x, 1);
            break;

            case 11: 
                printf("%d\n", x);
            break;

        }

        scanf("%d%*c", &op);

    }

    return 0;

}