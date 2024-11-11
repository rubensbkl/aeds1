/*
    Atividade 13 - v1.0 - 10 / 11 / 2024
    Author: Rubens Dias Bicalho
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
#include "Contato.hpp" // classe para tratar dados de pessoas

using namespace std;


/**
 * Métodos
 */
void method_0() {}

void method_1311() {
    cout << "\nMethod_01 - v1.0\n" << endl;

    string name;
    cout << "Nome: "; cin >> name;

    Contato pessoa1;
    pessoa1.setNome(name);
    pessoa1.hasErro() ? cout << "Erro: " << pessoa1.getErro() << endl : cout << "Nome: " << pessoa1.getNome() << endl;

    pause("Apertar ENTER para continuar");
}

void method_1312() {
    cout << "\nMethod_02 - v1.0\n" << endl;

    string phone;
    cout << "Telefone: "; cin >> phone;

    Contato pessoa1;
    pessoa1.setFone(phone);
    pessoa1.hasErro() ? cout << "Erro: " << pessoa1.getErro() << endl : cout << "Telefone: " << pessoa1.getFone() << endl;

    pause("Apertar ENTER para continuar");
}

void method_1313() {
    cout << "\nMethod_03 - v1.0\n" << endl;

    string phone;
    cout << "Telefone: "; cin >> phone;

    Contato pessoa1;
    pessoa1.setFone(phone);
    pessoa1.validPhones();

    pause("Apertar ENTER para continuar");
}

void method_1314() {
    cout << "\nMethod_04 - v1.0\n" << endl;

    string fileName;
    cout << "Nome do arquivo: "; cin >> fileName;

    Contato pessoa1;
    pessoa1.fread(fileName);
    if (pessoa1.hasErro()) {
        cout << "Erro: " << pessoa1.getErro() << endl;
    } else {
        cout << "Nome: " << pessoa1.getNome() << endl;
        cout << "Telefone: " << pessoa1.getFone() << endl;
    }

    pause("Apertar ENTER para continuar");
}

void method_1315() {
    cout << "\nMethod_05 - v1.0\n" << endl;

    string name, phone, fileName;
    cout << "Nome: "; cin >> name;
    cout << "Telefone: "; cin >> phone;
    cout << "Nome do arquivo: "; cin >> fileName;

    Contato pessoa1(name, phone);
    pessoa1.fprint(fileName);

    if (pessoa1.hasErro()) {
        cout << "Erro: " << pessoa1.getErro() << endl;
    } else {
        cout << "Dados gravados no arquivo: " << fileName << endl;
    }

    pause("Apertar ENTER para continuar");
}

void method_1316() {
    cout << "\nMethod_06 - v1.0\n" << endl;

    string name, phone, phone2, fileName;
    cout << "Nome: "; cin >> name;
    cout << "Telefone 1: "; cin >> phone;
    cout << "Telefone 2: "; cin >> phone2;
    cout << "Nome do arquivo: "; cin >> fileName;

    Contato pessoa1(name, phone, phone2);
    pessoa1.fprint(fileName);

    if (pessoa1.hasErro()) {
        cout << "Erro: " << pessoa1.getErro() << endl;
    } else {
        cout << "Dados gravados no arquivo: " << fileName << endl;
    }

    pause("Apertar ENTER para continuar");
}

void method_1317() {
    cout << "\nMethod_07 - v1.0\n" << endl;

    string name, phone, phone2;
    cout << "Nome: "; cin >> name;
    cout << "Telefone 1: "; getline(cin >> ws, phone);
    cout << "Telefone 2: "; getline(cin, phone2);

    Contato pessoa1(name, phone, phone2);

    cout << "Telefones: " << pessoa1.getPhones() << endl;

    pause("Apertar ENTER para continuar");
}

void method_1318() {
    cout << "\nMethod_08 - v1.0\n" << endl;

    string name, phone, phone2;
    cout << "Nome: "; cin >> name;
    cout << "Telefone 1: "; cin >> phone;

    Contato pessoa1(name, phone);

    cout << "Digite um telefone: ";
    getline(cin, phone2);
    pessoa1.setPhone2a(phone2);

    cout << pessoa1.getFone();
    if (pessoa1.getPhones() == 2) {
        cout << ", " << pessoa1.getFone2();
    }
    cout << endl;

    pause("Apertar ENTER para continuar");
}

void method_1319() {
    cout << "\nMethod_09 - v1.0\n" << endl;

    string name, phone;
    cout << "Nome: "; cin >> name;
    cout << "Telefone 1: "; cin >> phone;

    Contato pessoa1(name, phone);

    pessoa1.setPhone2b("91234-5678");
    if (pessoa1.hasErro()) {
        cout << "Erro: " << pessoa1.getErro() << endl;
    } else {
        cout << "Segundo telefone alterado para: " << pessoa1.getFone2() << endl;
    }

    pause("Apertar ENTER para continuar");
}

void method_1320() {
    cout << "\nMethod_10 - v1.0\n" << endl;

    string name, phone, phone2;
    cout << "Nome: ";
    getline(cin >> ws, name);
    cout << "Telefone 1: ";
    getline(cin, phone);
    cout << "Telefone 2: ";
    getline(cin, phone2);

    Contato pessoa1(name, phone, phone2);

    cout << "\nRemovendo o segundo telefone..." << endl;
    pessoa1.setPhone2c("");

    if (pessoa1.hasErro()) {
        cout << "Erro: " << pessoa1.getErro() << endl;
    } else {
        cout << "Segundo telefone removido." << endl;
    }

    cout << pessoa1.toString() << endl;

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
            case 1: method_1311(); break;
            case 2: method_1312(); break;
            case 3: method_1313(); break;
            case 4: method_1314(); break;
            case 5: method_1315(); break;
            case 6: method_1316(); break;
            case 7: method_1317(); break;
            case 8: method_1318(); break;
            case 9: method_1319(); break;
            case 10: method_1320(); break;
            default:
            cout << endl << "ERRO: Valor invalido." << endl;
        }

    } while (x != 0);

    pause("Apertar ENTER para terminar");

    return (0);

}