/*
    Contato.hpp - v1.0 - 10 / 11 / 2024
    Author: Rubens Dias Bicalho
*/

#ifndef _CONTATO_H_
#define _CONTATO_H_

/**
 * Dependências
 */
#include <iostream>
using std::cin ; // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream; // para ler arquivo

void pause(string text) {
    string dummy;
    cin.clear();
    cout << endl << text;
    cin.ignore();
    getline(cin, dummy);
    cout << endl << endl;
}

#include "Erro.hpp"

class Contato : public Erro {

private:

    string nome;
    int phones;
    string fone;
    string fone2;

    bool isPhoneValid(const string& phone) {
        for (char current : phone) {
            if (!isdigit(current) && current != '-') {
                return false;
            }
        }
        return true;
    }

public:

    ~Contato() {}

    Contato() {
        setErro(0);
        nome = "";
        phones = 0;
        fone = "";
        fone2 = "";
    }

    Contato(string nome_inicial, string fone_inicial, string fone2_inicial = "") {
        setErro(0);
        setNome(nome_inicial);
        phones = 0;
        setFone(fone_inicial);
        setFone2(fone2_inicial);
    }


    Contato(Contato const &another) {
        setErro(0);
        setNome(another.nome);
        phones = 0;
        setFone(another.fone);
        setFone2(another.fone2);
    }


    void setNome(string nome) {
        if (nome.empty()) setErro(1);
        else this->nome = nome;
    }

    void setPhones(int phones) {
        if (phones < 0) setErro(2);
        else this->phones = phones;
    }

    void setFone(string fone) {
        if (fone.empty()) setErro(3);
        else this->fone = fone;
    }

    void setFone2(string fone2) {
        if (fone2.empty()) setErro(4);
        else {
            this->fone2 = fone2;
            if (phones < 2) setPhones(2);
        }
    }

    string getNome() {
        return (this->nome);
    }

    int getPhones() {
        return (this->phones);
    }

    string getFone() {
        return (this->fone);
    }

    string getFone2() {
        return (this->fone2);
    }

    string toString() {
        return ("{ " + getNome() + ", " + getFone() + ", " + getFone2() + " }");
    }

    bool hasErro() {
        return (getErro() != 0);
    }

    void validPhones() {
        if (isPhoneValid(fone) && isPhoneValid(fone2)) {
            cout << "Telefones validos." << endl;
        } else {
            cout << "Telefones invalidos." << endl;
        }
    }

    void fread(const string fileName) {
        ifstream file;
        file.open(fileName);

        if (!file.is_open()) {
            setErro(5);
            return;
        }

        string name;
        string phone;
        string phone2;

        getline(file, name);
        getline(file, phone);
        getline(file, phone2);

        setNome(name);
        setFone(phone);
        setFone2(phone2);

        file.close();
    }

    void fprint(const string fileName) {
        ofstream file;
        file.open(fileName);

        if (!file.is_open()) {
            setErro(6);
            return;
        }

        file << nome << endl;
        file << fone << endl;
        file << fone2 << endl;

        file.close();
    }

    void setPhone2a(string phone2) {
        if (phones == 1) {
            char option;
            cout << "Quer acrescentar mais um numero? (s/n): ";
            cin >> option;
            if (option == 's') {
                setFone2(phone2);
                setPhones(2);
            } else {
                cout << "Operação cancelada." << endl;
            }
        } else if (phones == 0) {
            cout << "Primeiro defina o primeiro telefone usando setFone()." << endl;
        } else {
            setFone2(phone2);
        }
    }

    void setPhone2b(string phone2) {
        if (phones >= 2) {
            setFone2(phone2);
        } else {
            setErro(7);
        }
    }

    void setPhone2c(string phone2) {
        if (phones < 2) {
            setErro(8);
        } else if (phone2.empty()) {
            fone2 = "";
            phones = 1;
        } else {
            setErro(9);
        }
    }


};

using ref_Contato = Contato*;

#endif
