#include <iostream>
using namespace std;

int treeRoot(int current, int limit) {
    if (current > limit) { // Se for maior que o limite
        return 0; // Retorna 0
    }

    int count = 1; // Começa contagem em 1

    count += treeRoot(10 * current + 0, limit); // Raizes a esquerda
    count += treeRoot(10 * current + 1, limit); // Raizes a direita

    return count; // Retorna no final
}

int main() {
    int limit;
    cin >> limit; // Recebe o limite

    cout << treeRoot(1, limit) << endl; // Chama a função e imprime o resultado

    return 0;
}