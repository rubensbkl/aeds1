/**
 * Exemplo1500 - v0.0. - __ / __ / _____
 * Author: _____________________________
 */

/**
 * Dependencias
 */
#include <iostream>
#include <limits>
#include <string>

void pause(std::string text) {
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl << text;
    std::cin.ignore( );
    getline(std::cin, dummy);
    std::cout << std::endl;
}

class MyString {

private:
    
    int lenght;
    int capacity;
    char* data;

public:

    MyString() {
        lenght = 0;
        capacity = 1;
        data = new char[capacity];
        data[0] = '\0';
    }

    MyString(const char* s) {
        lenght = strlen(s);
        capacity = lenght + 1;
        data = new char[capacity];
        strcpy(data, s);
    }

    char* str_push_back(char* s, char c) {
        int new_lenght = lenght + 1;
        int new_capacity = new_lenght + 1;
        char* new_data = new char[new_capacity];
        strcpy(new_data, data);
        new_data[lenght] = c;
        new_data[new_lenght] = '\0';
        delete[] data;
        data = new_data;
        lenght = new_lenght;
        capacity = new_capacity;
        return data;
    }
};

/**
 * Métodos
 */
void method_00() {}

void method_01() {
    MyString s("Hello");
    s.str_push_back(s, ' ');
    s.str_push_back(s, 'W');
    s.str_push_back(s, 'o');
    s.str_push_back(s, 'r');
    s.str_push_back(s, 'l');
    s.str_push_back(s, 'd');
    std::cout << s << std::endl;
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
            default:
            std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
        }

    } while (x != 0);

    pause("Apertar ENTER para terminar");

    return (0);

}