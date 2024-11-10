/**
 * Atividade 11 - v1.0. - 03 / 11 / 2024
 * Author: Rubens Dias Bicalho
 */

/**
 * Dependencias
 */
#include <iostream>
#include <limits>
#include <string>

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
void method_0() {}

void method_1111() {

    cout << endl << "Method_01 - v1.0\n" << endl;

    int n, min, max;
    cout << "n = ";
    cin >> n;
    cout << "min = ";
    cin >> min;
    cout << "max = ";
    cin >> max;

    Array<int> array(n, min, max); 
    Array<int> array2;
    array.randomize(min, max);
    array2.fread("DADOS.TXT");
    array.fprint("DADOS.TXT");

    array.free();

    pause("Apertar ENTER para continuar");
    
}

void method_1112() {

    cout << endl << "Method_02 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = ";
    cin >> fileName;

    Array<int> array;
    array.fread(fileName);

    int maior = array.searchFirstPair();
    if (maior != -1 && array.getLength() > 0) {
        for (int x = 0; x < array.getLength(); x = x + 1) {
            if (array.get(x) > maior && array.get(x) % 2 == 0) {
                maior = array.get(x);
            }
        }
    }

    if (maior != -1) cout << "Maior par = " << maior << endl;
    else cout << "Nenhum par encontrado" << endl;

    array.free();

    pause("Apertar ENTER para continuar");

}

void method_1113() {

    cout << endl << "Method_03 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = ";
    cin >> fileName;

    Array<int> array;
    array.fread(fileName);

    int menor = array.searchFirstEvenx3();
    if (menor != -1 && array.getLength() > 0) {
        for (int x = 0; x < array.getLength(); x = x + 1) {
            if (array.get(x) < menor && array.get(x) % 3 == 0) {
                menor = array.get(x);
            }
        }
    }

    if (menor != -1) cout << "Menor numero divisivel por 3 = " << menor << endl;
    else cout << "Nenhum numero divisivel por 3 encontrado" << endl;

    array.free();

    pause("Apertar ENTER para continuar");

}

void method_1114() {
    cout << endl << "Method_04 - v1.0\n" << endl;

    int min, max;
    string fileName;
    cout << "fileName = "; cin >> fileName;
    cout << "min = "; cin >> min;
    cout << "max = "; cin >> max;

    Array<int> array;
    array.fread(fileName);

    int soma = array.addInterval(min, max);

    cout << "Soma dos numeros entre " << min << " e " << max << " = " << soma << endl;

    array.free();

    pause("Apertar ENTER para continuar");
}

void method_1115() {
    cout << endl << "Method_05 - v1.0\n" << endl;

    int min, max;
    string fileName;
    cout << "fileName = "; cin >> fileName;
    cout << "min = "; cin >> min;
    cout << "max = "; cin >> max;

    Array<int> array;
    array.fread(fileName);

    int soma = array.averageInterval(min, max);

    cout << "Media dos numeros entre " << min << " e " << max << " = " << soma << endl;

    array.free();

    pause("Apertar ENTER para continuar");
}

void method_1116() {
    cout << endl << "Method_06 - v1.0\n" << endl;

    int min, max;
    string fileName;
    cout << "fileName = "; cin >> fileName;

    Array<int> array;
    array.fread(fileName);

    bool soma = array.negatives();

    if (soma) cout << "Existem numeros negativos" << endl;
    else cout << "Nao existem numeros negativos" << endl;

    array.free();

    pause("Apertar ENTER para continuar");
}

/**
Method_07.
*/
void method_1117() {
    cout << endl << "Method_07 - v1.0\n" << endl;

    int min, max;
    string fileName;
    cout << "fileName = "; cin >> fileName;

    Array<int> array;
    array.fread(fileName);

    bool soma = array.isDecrescent();

    if (soma) cout << "Os numeros estao em ordem decrescente" << endl;
    else cout << "Os numeros nao estao em ordem decrescente" << endl;

    array.free();

    pause("Apertar ENTER para continuar");
}

void method_1118() {
    cout << endl << "Method_08 - v1.0\n" << endl;

    int procurado, inicio, fim;
    string fileName;
    cout << "fileName = "; cin >> fileName;
    cout << "Procurar pelo valor = "; cin >> procurado;
    cout << "Start = "; cin >> inicio;
    cout << "End = "; cin >> fim;

    Array<int> array;
    array.fread(fileName);

    bool existe = array.searchInterval(procurado, inicio, fim);

    if (existe) cout << "O numero " << procurado << " existe no intervalo [" << inicio << ", " << fim << "]" << endl;
    else cout << "O numero " << procurado << " nao existe no intervalo [" << inicio << ", " << fim << "]" << endl;

    array.free();

    pause("Apertar ENTER para continuar");
}

void method_1119() {
    cout << endl << "Method_09 - v1.0\n" << endl;

    int constante, inicio, fim;
    string fileName;
    cout << "fileName = "; cin >> fileName;
    cout << "Escalar por = "; cin >> constante;
    cout << "Start = "; cin >> inicio;
    cout << "End = "; cin >> fim;

    Array<int> array1;
    array1.fread(fileName);

    Array<int> array2 = array1.scalar(constante, inicio, fim);

    array1.print();
    array2.print();

    array1.free();
    array2.free();

    pause("Apertar ENTER para continuar");
}

void method_1120() {
    cout << endl << "Method_10 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = "; cin >> fileName;

    Array<int> array;
    array.fread(fileName);

    array.print();

    array.sortDown();

    array.print();

    array.free();

    pause("Apertar ENTER para continuar");
}

void method_11E1() {
    cout << endl << "Method_E1 - v1.0\n" << endl;

    int a1, a2;

    cout << "Tamanho do Array 1: "; cin >> a1;
    cout << "Tamanho do Array 2: "; cin >> a2;

    Array<int> array1(a1, 0);
    Array<int> array2(a2, 0);

    array1.read();
    array2.read();

    bool diferente = array1 != array2;

    if (diferente) cout << "Os arrays sao diferentes" << endl;
    else cout << "Os arrays sao iguais" << endl;

    array1.free();
    array2.free();


    pause("Apertar ENTER para continuar");
}

void method_11E2() {
    cout << endl << "Method_E2 - v1.0\n" << endl;

    int a1, a2;

    cout << "Tamanho do Array 1: "; cin >> a1;
    cout << "Tamanho do Array 2: "; cin >> a2;

    Array<int> array1(a1, 0);
    Array<int> array2(a2, 0);

    array1.read();
    array2.read();

    if (array1 != array2) cout << "Os arrays sao diferentes" << endl;
    else cout << "Os arrays sao iguais" << endl;

    array1.free();
    array2.free();


    pause("Apertar ENTER para continuar");
}

/**
 * Main
 */
int main (int argc, char** argv) {

    int x = 0;

    do {

        cout << "\nAtividade 11 - v1.0\n " << endl;

        cout << "Opcoes:" << endl;
        cout << " 0 - Encerrar" << endl;
        cout << " 1 - Metodo 01" << endl;
        cout << " 2 - Metodo 02" << endl;
        cout << " 3 - Metodo 03" << endl;
        cout << " 4 - Metodo 04" << endl;
        cout << " 5 - Metodo 05" << endl;
        cout << " 6 - Metodo 06" << endl;
        cout << " 7 - Metodo 07" << endl;
        cout << " 8 - Metodo 08" << endl;
        cout << " 9 - Metodo 09" << endl;
        cout << "10 - Metodo 10" << endl;
        cout << "11 - Metodo E1" << endl;
        cout << "12 - Metodo E2" << endl;

        cout << endl << "Entrar com uma opcao: ";
        cin >> x;

        switch (x) {
            case 0: method_0(); break;
            case 1: method_1111(); break;
            case 2: method_1112(); break;
            case 3: method_1113(); break;
            case 4: method_1114(); break;
            case 5: method_1115(); break;
            case 6: method_1116(); break;
            case 7: method_1117(); break;
            case 8: method_1118(); break;
            case 9: method_1119(); break;
            case 10: method_1120(); break;
            case 11: method_11E1(); break;
            case 12: method_11E2(); break;
            default:
            cout << endl << "ERRO: Valor invalido." << endl;
        }

    } while (x != 0);

    pause("Apertar ENTER para terminar");

    return (0);

}