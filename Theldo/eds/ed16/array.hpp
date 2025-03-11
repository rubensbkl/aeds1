#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <fstream>
#include <string>

template <typename T>
class Array {

private:
    T optional;
    int capacity;
    int lenght;
    T *data;

public:
    /**
     * Construtores
     */
    Array() {
        optional = 0;
        capacity = 0;
        lenght = 0;
        data = nullptr;
    }

    Array(int capacity) {
        optional = 0;
        this->capacity = capacity;
        lenght = 0;
        data = new T[capacity];
    }

    Array(int lenght, T initial) { // Adicionei esse tanto de this-> porque estava dando erro por contado nome igual
        this->optional = 0; // No parametro e no atributo.
        this->capacity = 0; // Faz mal expecificar? É mais "caro"? Ou é uma boa pratica que não perde desempenho?
        this->lenght = 0; 
        this->data = nullptr;
        if (lenght > 0) {
            this->capacity = lenght;
            this->lenght = lenght;
            this->data = new T[lenght];
            for (int i = 0; i < this->lenght; i++) {
                this->data[i] = initial;
            }
        }
    }

    Array(int lenght, int other[]) {
        optional = 0;
        if (lenght <= 0) {
            std::cout << "\nERROR: Missing data.\n" << std::endl;
        } else {
            this->lenght = lenght;
            data = new T[this->lenght];
            for (int x = 0; x < this->lenght; x = x + 1) {
                data[x] = other[x];
            }
        }
    }

    Array(const Array& other) {
        optional = 0;
        if (other.lenght <= 0) {
            std::cout << "\nERROR: Missing data.\n" << std::endl;
        } else {
            lenght = other.lenght;
            data = new T[other.lenght];
            for (int x = 0; x < lenght; x = x + 1) {
                data[x] = other.data[x];
            }
        }
    }

    /**
     * Funções
     */
    void set(int index, T value) {
        if ( 0 <= index && index < lenght ) {
            data[index] = value;
        }
    }

    T get (int index) {
        if (0 <= index && index < lenght) {
            value = data[index];
        }
        return value;
    }

    T getRefAdr (int index) {
        T value = optional;
        if (0 <= index && index < lenght) {
            return &data[index];
        }
        return nullptr;
    }

    bool dataIsNull() {
        if (data == nullptr) return true;
        return false;
    }

    bool dataIsValid() {
        if (data == nullptr) return false;
        return true;
    }

    int getLenght() {
        return lenght;
    }

    void print() {
        for (int i = 0; i < lenght; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

};

#endif // ARRAY_H
