#include <stdio.h>

int main(void) {

    int nota;
    scanf("%d", &nota);

    char ap, rec, rep;
    ap = 'N' + 5 * (nota / 60); // Checar se é igual ou maior que 60
    rec = 'N' + 5 * (1 - nota/60) * (nota/45); // Checar se é menor que 60 e igual ou maior que 45
    rep = 'N' + 5 * (1 - nota/60) * (1 - nota/45); // Checar se é menor que 45

    printf("%c\n", ap);
    printf("%c\n", rec);
    printf("%c\n", rep);

    return 0;
}