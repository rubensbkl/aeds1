/**
 * Atividade 11 - v1.0. - 03 / 11 / 2024
 * Author: Rubens Dias Bicalho
 */

/**
 * Dependencias
 */
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

/**
 * Classes / pacotes
 */
#include "dearray.hpp"

using namespace std;

// ----------------------------------------------- definicoes globais
void pause (string text) {
    string dummy;
    cin.clear();
    cout << endl << text;
    cin.ignore( );
    getline(cin, dummy);
    cout << endl;
}

/**
 * Métodos
 */
void method_00() {}

void method_1111() {
    // identificar
    cout << endl << "Method_01 - v1.0\n" << endl;
    // definir parametros
    int n, min, max;
    // ler parametros
    cout << "n = ";
    cin >> n;
    cout << "min = ";
    cin >> min;
    cout << "max = ";
    cin >> max;
    // definir dados
    Array<int> array(n, min, max); // Cria um array com dados randomizados
    // gerar dados
    array.randomize(min, max); // Randomiza os dados de um array ja existente
    // mostrar dados
    array.fprint("DADOS.TXT");
    // reciclar espaco
    array.free();
    // encerrar
    pause("Apertar ENTER para continuar");
}

void method_1112() {
    // identificar
    cout << endl << "Method_02 - v1.0\n" << endl;
    // definir parametros
    int maior;
    string fileName;
    // ler parametros
    cout << "fileName = ";
    cin >> fileName;
    // definir dados
    Array<int> array;
    array.fread(fileName);
    // processar dados
    maior = array.searchFirstPair();
    if (maior != -1 && array.getLength() > 0) {
        for (int x = 0; x < array.getLength(); x = x + 1) {
            if (array.get(x) > maior && array.get(x) % 2 == 0) {
                maior = array.get(x);
            }
        }
    }
    // mostrar dados
    if (maior != -1) cout << "Maior par = " << maior << endl;
    else cout << "Nenhum par encontrado" << endl;
    // reciclar espaco
    array.free();
    // encerrar
    pause("Apertar ENTER para continuar");
}

void method_03() {
    // identificar
    cout << endl << "Method_03 - v1.0" << endl;
    // ler dados
    int_array.read();
    // mostrar dados
    int_array.fprint("INT_ARRAY1.TXT");
    // reciclar espaco
    int_array.free();
    // encerrar
    pause ("Apertar ENTER para continuar");
}

void method_04() {
    // definir dados
    Array <int> int_array(5, 0);
    // identificar
    cout << endl << "Method_04 - v1.0" << endl;
    // ler dados
    int_array.fread("INT_ARRAY1.TXT");
    // mostrar dados
    int_array.print();
    // reciclar espaco
    int_array.free();
    // encerrar
    pause("Apertar ENTER para continuar");
} // end method_04 ( )

void method_05() {
    // definir dados
    int other[] = {1, 2, 3, 4, 5};
    Array <int> int_array(5, other);
    // identificar
    cout << endl << "Method_05 - v1.0" << endl;
    // mostrar dados
    cout << "\nCopia\n" << endl;
    int_array.print();
    // reciclar espaco
    int_array.free();
    // encerrar
    pause("Apertar ENTER para continuar");
}

void method_06() {
    // definir dados
    Array <int> int_array1(1, 0);
    // identificar
    cout << endl << "Method_06 - v0.0" << endl;
    // ler dados
    int_array1.fread("INT_ARRAY1.TXT");
    // mostrar dados
    cout << "\nOriginal\n" << endl;
    int_array1.print();
    // criar copia
    Array <int> int_array2(int_array1);
    // mostrar dados
    cout << "\nCopia\n" << endl;
    int_array2.print();
    // reciclar espaco
    int_array1.free();
    int_array2.free();
    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
Method_07.
*/
void method_07() {
    // definir dados
    Array <int> int_array1(1, 0);
    Array <int> int_array2(1, 0);
    // identificar
    cout << endl << "Method_07 - v0.0" << endl;
    // ler dados
    int_array1.fread ("INT_ARRAY1.TXT");
    // mostrar dados
    cout << "\nOriginal\n" << endl;
    int_array1.print();
    // copiar dados
    int_array2 = int_array1;
    // mostrar dados
    cout << "\nCopia\n" << endl;
    int_array2.print();
    // reciclar espaco
    int_array1.free();
    int_array2.free();
    // encerrar
    pause ("Apertar ENTER para continuar");
}

void method_08() {
    // definir dados
    int other[] = {1, 2, 3};
    Array <int> int_array1(3, other);
    Array <int> int_array2(3, other);
    int x;
    // identificar
    cout << endl << "Method_08 - v1.0" << endl;
    // mostrar dados
    cout << endl;
    cout << "Array_1";
    int_array1.print();
    // mostrar dados
    cout << "Array_2";
    int_array2.print();
    // mostrar comparacao
    cout << "Igualdade = " << (int_array1==int_array2) << endl;
    // alterar dado
    int_array2.set (0, (-1));
    // mostrar dados
    cout << endl;
    cout << "Array_1" << endl;
    int_array1.print();
    cout << "Array_2" << endl;
    int_array2.print();
    // mostrar comparacao
    cout << "Igualdade = " << (int_array1==int_array2) << endl;
    // reciclar espaco
    int_array1.free();
    int_array2.free();
    // encerrar
    pause("Apertar ENTER para continuar");
}

void method_09() {
    // definir dados
    Array <int> int_array1(1, 0);
    Array <int> int_array2(1, 0);
    Array <int> int_array3(1, 0);
    // identificar
    cout << endl << "Method_09 - v1.0" << endl;
    // ler dados
    int_array1.fread ("INT_ARRAY1.TXT");
    // copiar dados
    int_array2 = int_array1;
    // somar dados
    int_array3 = int_array2 + int_array1;
    // mostrar dados
    cout << endl;
    cout << "Original" << endl;
    int_array1.print();
    // mostrar dados
    cout << "Copia" << endl;
    int_array2.print();
    // mostrar dados
    cout << "Soma" << endl;
    int_array3.print();
    // reciclar espaco
    int_array1.free();
    int_array2.free();
    int_array3.free();
    // encerrar
    pause("Apertar ENTER para continuar");
}

void method_10() {
    // definir dados
    int other[] = {1, 2, 3, 4, 5};
    Array <int> int_array(5, other);
    int x;
    // identificar
    cout << endl << "Method_10 - v0.0" << endl;
    // mostrar dados
    cout << "\nAcesso externo" << endl;
    for (x = 0; x<int_array.getLength(); x = x + 1) {
        cout << endl << setw(3) << x << " : " << int_array[x];
    }
    cout << endl << "\nFora dos limites:";
    cout << endl << "[-1]: " << int_array.get(-1) << endl;
    cout << endl << "[" << int_array.getLength() << "]: " << int_array[int_array.getLength()] << endl;
    // reciclar espaco
    int_array.free();
    // encerrar
    pause("Apertar ENTER para continuar");
}

/**
 * Main
 */
int main (int argc, char** argv) {

    // definir dado
    int x = 0; // definir variavel com valor inicial

    // repetir até desejar parar
    do {

        // identificar
        cout << "\nAtividade 11 - v1.0\n " << endl;

        // mostrar opcoes
        cout << "Opcoes:" << endl;
        cout << " 0 - Encerrar " << endl;
        cout << " 1 - Gerar n numeros aleatorios dentro do limite" << endl;
        cout << " 2 - Procurar maior numero par no arquivo" << endl;
        cout << " 3 - " << endl;
        cout << " 4 - " << endl;
        cout << " 5 - " << endl;
        cout << " 6 - " << endl;
        cout << " 7 - " << endl;
        cout << " 8 - " << endl;
        cout << " 9 - " << endl;
        cout << "10 - " << endl;

        // ler do teclado
        cout << endl << "Entrar com uma opcao: ";
        cin >> x;

        // escolher acao
        switch (x) {
            case 0: method_00(); break;
            case 1: method_1111(); break;
            case 2: method_1112(); break;
            case 3: method_03(); break;
            case 4: method_04(); break;
            case 5: method_05(); break;
            case 6: method_06(); break;
            case 7: method_07(); break;
            case 8: method_08(); break;
            case 9: method_09(); break;
            case 10: method_10(); break;
            default:
            cout << endl << "ERRO: Valor invalido." << endl;
        }

    } while (x != 0);

    // encerrar
    pause("Apertar ENTER para terminar");

    return (0);

}