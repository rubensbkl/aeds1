/*
    dearray.hpp - v1.0 - 10 / 11 / 2024
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
using std::ifstream; // para ler arquivo

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
    Array() {
        length = 0;
        data = nullptr;
    }

    Array(int n, T initial) {
        length = 0;
        data = nullptr;
        if (n > 0) {
            length = n;
            data = new T[length];
            for (int i = 0; i < length; i++) {
                data[i] = initial;
            }
        }
    }

    Array(int length, int other[]) {
        if (length <= 0) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            this->length = length;
            data = new T[this->length];
            for (int x = 0; x < this->length; x = x + 1) {
                data[x] = other[x];
            }
        }
    }

    Array(const Array& other) {
        if (other.length <= 0) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            length = other.length;
            data = new T[other.length];
            for (int x = 0; x < length; x = x + 1) {
                data[x] = other.data[x];
            }
        }
    }

    Array(int n, int min, int max) {
        length = 0;
        data = nullptr;
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

    void fprint(const string fileName) {
        ofstream afile;
        afile.open ( fileName );
        afile << length << endl;
        for (int x = 0; x < length; x = x + 1) {
            afile << data[x] << endl;
        }
        afile.close ( );
    }

    void fread(const string fileName) {
        ifstream afile;
        int n = 0;
        afile.open (fileName);
        afile >> n;
        if ( n <= 0 ) {
            cout << "\nERROR: Invalid length.\n" << endl;
        } else {
            length = n;
            data = new T[n];
            for (int x = 0; x < length; x = x + 1) {
                afile >> data[x];
            }
        }
        afile.close();
    }

    /**
     * Operadores
     */
    Array& operator=(const Array <T> other) {
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

    bool operator==(const Array <T> other) {
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

    Array& operator+( const Array <T> other ) {
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

    bool operator!=(const Array <T> other) {
        if (other.length == 0 || length != other.length) {
            cout << "\nERROR: Missing data.\n" << endl;
            return true;
        } else {
            for (int x = 0; x < this->length; x++) {
                if (data[x] != other.data[x]) return true;
            }
        }
        return false;
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

    /**
     * Outras funções por enquanto
     */

    void randomInit() {
        std::srand(std::time(0));
    }

    T randomInRange(int min, int max) {
        return min + std::rand() % (max - min + 1);
    }

    T randomize(T min, T max) {
        randomInit();
        for (int i = 0; i < length; i++) {
            data[i] = randomInRange(min, max);
        }
    }

    int searchFirstPair() {
        for (int i = 0; i < length; i++) {
            if (data[i] % 2 == 0) {
                return i;
            }
        }
        return -1;
    }

    int searchFirstEvenx3() {
        for (int i = 0; i < length; i++) {
            if (data[i] % 3 == 0) {
                return i;
            }
        }
        return -1;
    }

    T addInterval(int inicio, int fim) {
        
        if (inicio < 0 || fim >= length || inicio > fim) return -1;

        int soma = 0;
        for (int i = inicio; i <= fim; ++i) {
            soma += data[i];
        }
        return soma;
    }

    T averageInterval(int inicio, int fim) {
        
        if (inicio < 0 || fim >= length || inicio > fim) return -1;

        int soma = 0, qtd = 0;
        for (int i = inicio; i <= fim; ++i) {
            soma += data[i];
            qtd++;
            cout << i << " " << qtd << endl;
        }
        cout << "Soma: " << soma << endl;
        cout << "Qtd: " << qtd << endl;
        return (soma / qtd);
    }

    bool negatives() {

        for (int i = 0; i < length; ++i) {
            if (data[i] < 0) {
                return true;
            }
        }
        return false;
    }

    bool isDecrescent() {
        for (int i = 0; i < length - 1; ++i) {
            if (data[i] < data[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool searchInterval(int procurado, int inicio, int fim) {
        for (int i = inicio; i <= fim; ++i) {
            if (data[i] == procurado) {
                cout << "[" << i << "] = " << procurado << endl;
                return true;
            }
        }

        return false;
    }

    Array<T> scalar(int constante, int inicio, int fim) {
        if (inicio < 0 || fim >= length || inicio > fim) {
            cout << "Intervalo inválido!" << endl;
            return *this;
        }

        Array<T> novo(fim - inicio + 1, 0);

        for (int i = 0; i <= novo.getLength(); ++i) {
            novo.set( i, data[i + inicio] * constante);
        }

        return novo;
    }

    void sortDown() {
        for (int i = 0; i < length; ++i) {
            for (int j = i + 1; j < length; ++j) {
                if (data[i] < data[j]) {
                    T temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
            }
        }
    }

};

#endif