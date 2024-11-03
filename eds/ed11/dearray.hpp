/*
dearray.hpp - v1.0. - 03 / 11 / 2024
Author: Rubens Dias Bicalho
*/

#ifndef _DEARRAY_HPP_
#define _DEARRAY_HPP_

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
using std::ifstream ; // para ler arquivo

template <typename T>
class Array {

private:
    T optional;
    int length;
    T *data;

public:
    /**
     * Construtores
     */
    // construtor padrão
    Array() {
        // definir valores iniciais
        length = 0;
        // reservar area
        data = nullptr;
    }

    // construtor com tamanho e valor inicial
    Array(int n, T initial) {
        // definir valores iniciais
        length = 0;
        data = nullptr;
        // reservar area
        if (n > 0) {
            length = n;
            data = new T[length];
            for (int i = 0; i < length; i++) {
                data[i] = initial;
            }
        }
    }

    // contrutor baseado em outro arranjo
    Array(int length, int other[]) {
        if (length <= 0) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            // criar copia
            this->length = length;
            // reservar area
            data = new T[this->length];
            // ler dados
            for (int x = 0; x < this->length; x = x + 1) {
                data[x] = other[x];
            }
        }
    }

    // contrutor baseado em outro objeto
    Array (const Array& other) {
        if (other.length <= 0) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            // criar copia
            length = other.length;
            // reservar area
            data = new T[other.length];
            // ler dados
            for (int x = 0; x < length; x = x + 1) {
                data[x] = other.data[x];
            }
        }
    }

    // contrutor aleatorio
    Array (int n, int min, int max) {
        // definir valores iniciais
        length = 0;
        data = nullptr;
        // reservar area
        if (n > 0) {
            length = n;
            data = new T[length];
            randomInit();
            for (int i = 0; i < length; i++) {
                data[i] = randomIntInRange(min, max);
            }
        }
    }
    
    /**
     * Funções
     */

    int searchFirstPair() {
        for (int i = 0; i < length; i++) {
            if (data[i] % 2 == 0) {
                return i;
            }
        }
        return -1;
    }

    void randomInit() {
        std::srand(std::time(0));
    }

    int randomIntInRange(int min, int max) {
        return min + std::rand() % (max - min + 1);
    }

    void randomize(int min, int max) {
        randomInit();
        for (int i = 0; i < length; i++) {
            data[i] = randomIntInRange(min, max);
        }
    }

    void free() {
        if (data != nullptr) {
            delete (data);
            data = nullptr;
        }
    }

    void set(int position, T value) {
        if ( 0 <= position && position < length ) {
            data [position] = value;
        }
    }

    T get (int position) {
        T value = optional;
        if (0 <= position && position < length) {
            value = data [position];
        }
        return ( value );
    }
    
    void print() {
        cout << endl;
        for (int x = 0; x < length; x = x + 1) {
            cout << setw(3) << x << " : " << setw(9) << data[x] << endl;
        }
        cout << endl;
    }

    void read() {
        cout << endl;
        for ( int x = 0; x < length; x = x + 1 ) {
            cout << setw(3) << x << " : ";
            cin >> data[x];
        }
        cout << endl;
    }

    void fprint ( string fileName ) {
        ofstream afile; // output file
        afile.open ( fileName );
        afile << length << endl;
        for (int x = 0; x < length; x = x + 1) {
            afile << data[x] << endl;
        }
        afile.close ( );
    }

    void fread (string fileName) {
        ifstream afile; // input file
        int n = 0;
        afile.open (fileName);
        afile >> n;
        if ( n <= 0 ) {
            cout << "\nERROR: Invalid length.\n" << endl;
        } else {
            // guardar a quantidade de dados
            length = n;
            // reservar area
            data = new T[n];
            // ler dados
            for (int x = 0; x < length; x = x + 1) {
                afile >> data[x];
            }
        }
        afile.close();
    }

    /**
     * Operadores
     */
    Array& operator= (const Array <T> other) {
        if ( other.length <= 0 ) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            this->length = other.length;
            this->data = new T [ other.length ];
            for ( int x = 0; x < this->length; x=x+1 ) {
                data [ x ] = other.data [ x ];
            }
        }
        return (*this);
    }

    bool operator== (const Array <T> other) {
        bool result = false;
        int x = 0;
        if (other.length == 0 || length != other.length) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            x = 0;
            result = true;
            while (x < this->length && result) {
                result = result && (data[x] == other.data[x]);
                x = x + 1;
            }
        }
        return (result);
    }

    Array& operator+ ( const Array <T> other ) {
        static Array <T> result (other);
        if ( other.length <= 0 ) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            for (int x = 0; x < this->length; x = x + 1) {
                result.data[x] = result.data[x] + this->data[x];
            }
        }
        return (result);
    }

    /**
     * Getters
     */

    const int getLength() {
        return (length);
    }
    
    T& operator[](const int position) {
        static T value = optional;
        if (position < 0 || length <= position) {
            cout << endl << "\nERROR: Invalid position.\n" << endl;
        } else {
            value = data[position];
        }
        return (value);
    }

};

#endif