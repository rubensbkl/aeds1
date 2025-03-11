/*
    Atividade 13 - v1.0 - 10 / 11 / 2024
    Author: Rubens Dias Bicalho
*/

/**
 * Dependencias
 */
#include <iostream>


/**
 * Classes / pacotes
 */
#include "Erro.hpp"

/**
 * Funções auxiliares
 */
void pause(std::string text) {
    std::string dummy;
    std::cin.clear ( );
    std::cout << std::endl << text;
    std::cin.ignore( );
    std::getline(std::cin, dummy);
    std::cout << std::endl << std::endl;
}



class MyString : public Erro {

private:
    std::string conteudo;

public:
    MyString()


    ~MyString() {}

    MyString(std::string conteudo) {
        this->conteudo = conteudo;
    }


    std::string getConteudo() {
        return conteudo;
    }

    void setConteudo(std::string conteudo) {
        this->conteudo = conteudo;
    }
};

/**
 * Métodos
 */
void method_00() {}

void method_01411() {
    MyString *s = new MyString ( );
    std::cout << "\nMethod_01 - v0.0\n" << std::endl;
    pause ( "Apertar ENTER para continuar" );
}


/**
 * Main
 */
int main (int argc, char** argv) {

    int x = 0;

    do {

        std::cout << "\nAtividade 11 - v1.0\n " << std::endl;

        std::cout << "Opcoes:" << std::endl;
        std::cout << " 0 - Encerrar" << std::endl;
        std::cout << " 1 - Metodo 01" << std::endl;
        std::cout << " 2 - Metodo 02" << std::endl;
        std::cout << " 3 - Metodo 03" << std::endl;
        std::cout << " 4 - Metodo 04" << std::endl;
        std::cout << " 5 - Metodo 05" << std::endl;
        std::cout << " 6 - Metodo 06" << std::endl;
        std::cout << " 7 - Metodo 07" << std::endl;
        std::cout << " 8 - Metodo 08" << std::endl;
        std::cout << " 9 - Metodo 09" << std::endl;
        std::cout << "10 - Metodo 10" << std::endl;
        std::cout << "11 - Metodo E1" << std::endl;
        std::cout << "12 - Metodo E2" << std::endl;

        std::cout << std::endl << "Entrar com uma opcao: ";
        std::cin >> x;

        switch (x) {
            case 0: method_00(); break;
            case 1: method_1411(); break;
            default:
            std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
        }

    } while (x != 0);

    pause("Apertar ENTER para terminar");

    return (0);

}