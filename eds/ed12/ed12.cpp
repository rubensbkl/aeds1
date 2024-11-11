/**
 * Atividade 11 - v1.0. - 10 / 11 / 2024
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
#include "dematrix.hpp"

using namespace std;

void pause(string text) {
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

void method_1211() {
    cout << endl << "Method_01 - v1.0\n" << endl;

    int m, n, min, max;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    cout << "min = "; cin >> min;
    cout << "max = "; cin >> max;

    Matrix<int> matrix(m, n, 0); 
    matrix.randomize(min, max);
    matrix.fprint("DADOS.TXT");

    pause("Apertar ENTER para continuar");
}

void method_1212() {
    cout << endl << "Method_02 - v1.0\n" << endl;

    int constante;
    string fileName;
    cout << "fileName = "; cin >> fileName;
    cout << "Escalar por = "; cin >> constante;

    Matrix<int> matrix1;
    matrix1.fread(fileName);

    Matrix<int> matrix2 = matrix1.scalar(constante);

    matrix1.print();
    matrix2.print();

    pause("Apertar ENTER para continuar");
}

void method_1213() {
    cout << endl << "Method_03 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = "; cin >> fileName;

    Matrix<int> matrix;
    matrix.fread(fileName);

    bool identidade = matrix.identidade();

    if (identidade) cout << "A matriz e identidade" << endl;
    else cout << "A matriz nao e identidade" << endl;

    pause("Apertar ENTER para continuar");
}

void method_1214() {
    cout << endl << "Method_04 - v1.0\n" << endl;

    Matrix<int> matrix1;
    Matrix<int> matrix2;
    matrix1.fread("DADOS1.TXT");
    matrix2.fread("DADOS2.TXT");

    if (matrix1 == matrix2) cout << "As matrizes sao iguais" << endl;
    else cout << "As matrizes sao diferentes" << endl;

    pause("Apertar ENTER para continuar");
}

void method_1215() {
    cout << endl << "Method_05 - v1.0\n" << endl;

    Matrix<int> matrix1;
    Matrix<int> matrix2;
    matrix1.fread("DADOS1.TXT");
    matrix2.fread("DADOS2.TXT");
    Matrix<int> soma = matrix1.add(matrix2);

    soma.print();

    pause("Apertar ENTER para continuar");
}

void method_1216() {
    cout << endl << "Method_06 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = "; cin >> fileName;

    Matrix<int> matrix1;
    matrix1.fread(fileName);
    matrix1.addRows (0, 1, (-1));

    matrix1.print();

    pause("Apertar ENTER para continuar");
}

void method_1217() {
    cout << endl << "Method_07 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = "; cin >> fileName;

    Matrix<int> matrix1;
    matrix1.fread(fileName);
    matrix1.subtractRows(0, 1, (2));

    matrix1.print();

    pause("Apertar ENTER para continuar");
}

void method_1218() {
    cout << endl << "Method_08 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = "; cin >> fileName;

    Matrix<int> matrix1;
    matrix1.fread(fileName);
    matrix1.subtractRows(0, 1, (2));

    matrix1.print();

    pause("Apertar ENTER para continuar");
}

void method_1219() {
    cout << endl << "Method_09 - v1.0\n" << endl;

    int procurado;
    string fileName;
    cout << "fileName = "; cin >> fileName;
    cout << "Escalar por = "; cin >> procurado;

    Matrix<int> matrix1;
    matrix1.fread(fileName);
    int linha = matrix1.searchColumns(procurado);

    if (linha != -1) cout << "O valor " << procurado << " foi encontrado na coluna " << linha << endl;
    else cout << "O valor " << procurado << " nao foi encontrado" << endl;

    pause("Apertar ENTER para continuar");
}

void method_1220() {
    cout << endl << "Method_10 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = "; cin >> fileName;

    Matrix<int> matrix;
    matrix.fread(fileName);

    matrix.print();

    matrix.transpose();

    matrix.print();

    pause("Apertar ENTER para continuar");
}

void method_12E1() {
    cout << endl << "Method_E1 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = "; cin >> fileName;

    Matrix<int> matrix;
    matrix.fread(fileName);

    if (matrix.sequencial()) cout << "A matriz tem padrao sequencial" << endl;
    else cout << "A matriz nao tem padrao sequencial" << endl;

    pause("Apertar ENTER para continuar");
}

void method_12E2() {
    cout << endl << "Method_E2 - v1.0\n" << endl;

    string fileName;
    cout << "fileName = "; cin >> fileName;

    Matrix<int> matrix;
    matrix.fread(fileName);

    if (matrix.sequencialInverso()) cout << "A matriz tem padrao sequencial inverso" << endl;
    else cout << "A matriz nao tem padrao sequencial inverso" << endl;

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
            case 1: method_1211(); break;
            case 2: method_1212(); break;
            case 3: method_1213(); break;
            case 4: method_1214(); break;
            case 5: method_1215(); break;
            case 6: method_1216(); break;
            case 7: method_1217(); break;
            case 8: method_1218(); break;
            case 9: method_1219(); break;
            case 10: method_1220(); break;
            case 11: method_12E1(); break;
            case 12: method_12E2(); break;
            default:
            cout << endl << "ERRO: Valor invalido." << endl;
        }

    } while (x != 0);

    pause("Apertar ENTER para terminar");

    return (0);

}