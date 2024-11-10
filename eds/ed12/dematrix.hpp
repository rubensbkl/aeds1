/*
    mymatrix.hpp - v0.0. - __ / __ / _____
    Author: _________________________
*/

#ifndef _MYMATRIX_H_
#define _MYMATRIX_H_

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

template < typename T >
class Matrix {

private:
    T optional;
    int rows ;
    int columns;
    T** data ;

public:
    /**
     * Construtores
     */
    Matrix() {
        this->rows = 0;
        this->columns = 0;
        data = nullptr;
    }

    Matrix(int rows, int columns, T initial) {
        bool OK = true;
        this->optional = initial ;
        this->rows = rows ;
        this->columns = columns;
        data = new T*[rows];
        if (data != nullptr) {
            for (int x = 0; x < rows; x=x+1) {
                data [x] = new T[columns];
                for(int y = 0; y < columns; y=y+1) {
                    data[x][y] = initial;
                }
                OK = OK && ( data[x] != nullptr );
            }
            if (!OK) {
                data = nullptr;
            }
        }
    }

    ~Matrix() {
        if (data != nullptr) {
            for (int x = 0; x < rows; x=x+1) {
                delete (data [ x ]);
            }
            delete (data);
            data = nullptr;
        }
    }

    /**
     * Funções
     */
    void set(int row, int column, T value ) {
        if (row < 0 || row >= rows || column < 0 || column >= columns) {
            cout << "\nERROR: Invalid position.\n";
        } else {
            data[row][column] = value;
        }
    }

    T get(int row, int column) {
        T value = optional;
        if (row < 0 || row >= rows || column < 0 || column >= columns) {
            cout << "\nERROR: Invalid position.\n";
        } else {
            value = data[row][column];
        }
        return (value);
    }

    void print() {
        cout << endl;
        for (int x = 0; x < rows; x=x+1) {
            for (int y = 0; y < columns; y=y+1) {
                cout << data[x][y] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    void read() {
        cout << endl;
        for (int x = 0; x < rows; x=x+1) {
            for (int y = 0; y < columns; y=y+1) {
                cout << setw(2) << x << ", " << setw(2) << y << " : ";
                cin >> data[x][y];
            }
        }
        cout << endl;
    }

    void fprint(string fileName) {
        ofstream afile;
        afile.open (fileName);
        afile << rows << endl;
        afile << columns << endl;
        for (int x = 0; x < rows; x=x+1) {
            for (int y = 0; y < columns; y=y+1) {
                afile << data[x][y] << endl;
            }
        }
        afile.close();
    }

    void fread(string fileName) {
        ifstream afile;
        int m = 0;
        int n = 0;
        afile.open(fileName);
        afile >> m;
        afile >> n;
        if (m <= 0 || n <= 0) {
            cout << "\nERROR: Invalid dimensions for matrix.\n" << endl;
        } else {
            rows = m;
            columns = n;
            data = new T*[rows];
            for (int x = 0; x < rows; x=x+1) {
                data[x] = new T[columns];
            }
            for (int x = 0; x < rows; x=x+1) {
                for (int y = 0; y < columns; y=y+1) {
                    afile >> data[x][y];
                }
            }
        }
        afile.close();
    }

    Matrix& operator= (const Matrix <T> &other) {
        if (other.rows == 0 || other.columns == 0) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            this->rows = other.rows ;
            this->columns = other.columns;
            this->data = new T*[rows];
            for (int x = 0; x < rows; x=x+1) {
                this->data[x] = new T [columns];
            }
            for (int x = 0; x < this->rows; x=x+1) {
                for (int y = 0; y < this->columns; y=y+1) {
                    data[x][y] = other.data[x][y];
                }
            }
        }
        return (*this);
    }

    bool isZeros() {
        bool result = false;
        int x = 0;
        int y = 0;
        if (rows > 0 && columns > 0) {
            result = true;
            while (x < rows && result) {
                y = 0;
                while (y < columns && result) {
                    result = result && (data[x][y] == 0);
                    y = y + 1;
                }
                x = x + 1;
            }
        }
        return (result);
    }

    bool operator!= (const Matrix <T> &other) {
        bool result = false;
        int x = 0;
        int y = 0;
        if (other.rows == 0 || rows != other.rows || other.columns == 0 || columns != other.columns) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            x = 0;
            while (x < rows && ! result) {
                y = 0;
                while (y < columns && ! result) {
                    result = (data[x][y] != other.data[x][y]);
                    y = y + 1;
                }
                x = x + 1;
            }
        }
        return (result);
    }

    Matrix& operator- (const Matrix <T> &other) {
        static Matrix <T> result ( 1, 1, 0 );
        int x = 0;
        int y = 0;
        if (other.rows == 0 || rows != other.rows || other.columns == 0 || columns != other.columns) {
            cout << "\nERROR: Missing data.\n" << endl;
        } else {
            result.rows = rows;
            result.columns = other.columns;
            result.data = new T*[result.rows];
            for (int x = 0; x < result.rows; x=x+1) {
                result.data[x] = new T[result.columns];
            }
            for (int x = 0; x < result.rows; x=x+1) {
                for (int y = 0; y < result.columns; y=y+1) {
                    result.data[x][y] = data[x][y] - other.data[x][y];
                }
            }
        }
        return (result);
    }

    Matrix& operator* (const Matrix <T> &other) {
        static Matrix <T> result ( 1, 1, 0 );
        int x = 0;
        int y = 0;
        int z = 0;
        int sum = 0;
        if ( rows <= 0 || columns == 0 || other.rows <= 0 || other.columns == 0 || columns != other.rows ) {
            cout << endl << "ERROR: Invalid data." << endl;
            result.data[0][0] = 0;
        } else {
            result.rows = rows;
            result.columns = other.columns;
            result.data = new T*[result.rows];
            for (int x = 0; x < result.rows; x=x+1) {
                result.data[x] = new T[result.columns];
            }
            for (x = 0; x < result.rows; x = x + 1) {
                for (y = 0; y < result.columns; y = y + 1) {
                    sum = 0;
                    for (z = 0; z < columns; z = z + 1) {
                        sum = sum + data[x][z] * other.data[z][y];
                    }
                    result.data[x][y] = sum;
                }
            }
        }
        return (result);
    }

    bool operator== (const Matrix <T> &other) {
        bool result = false;
        int x = 0;
        int y = 0;
        if (other.rows == 0 || rows != other.rows || other.columns == 0 || columns != other.columns) {
            cout << "\nERROR: Missing data.\n" << endl;
            return false;
        } else {
            for (int x = 0; x < rows; x++) {
                for (int y = 0; y < rows; y++) {
                    if (data[x][y] != other.data[x][y]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }

    const int getRows() {
        return (rows);
    }
    const int getColumns() {
        return (columns);
    }  

    /**
     * Outras funções por enquanto
     */


    void randomInit() {
        std::srand(std::time(0));
    }

    T randomInRange(T min, T max) {
        return min + std::rand() % (max - min + 1);
    }

    void randomize(T min, T max) {
        randomInit();
        for (int x = 0; x < rows; x=x+1) {
            for (int y = 0; y < columns; y=y+1) {
                data[x][y] = randomInRange(min, max);
            }
        }
    }

    Matrix<T> scalar(T constante) {

        Matrix<int> novo(rows, columns, 0);

        for (int x = 0; x < rows; x=x+1) {
            for (int y = 0; y < columns; y=y+1) {
                novo.set(x, y, data[x][y]);
            }
        }

        return novo;
    }

    bool identidade() const {
        if (rows != columns) {
            return false;
        }

        for (int x = 0; x < rows; x++) {
            for (int y = 0; y < columns; y++) {
                if (x == y) {
                    if (data[x][y] != 1) {
                        return false;
                    }
                } else {
                    if (data[x][y] != 0) {
                        return false;
                    }
                }
            }
        }

        return true;
    }

    Matrix<T> add(const Matrix<T> &other) {
        Matrix<T> novo(rows, columns, 0);
        if (rows != other.rows || columns != other.columns) {
            cout << "ERROR: Invalid dimensions for matrix." << endl;
            return novo;
        }
        for (int x = 0; x < rows; x++) {
            for (int y = 0; y < columns; y++) {
                novo.set(x, y, data[x][y] + other.data[x][y]);
            }
        }
        return novo;
    }

    void addRows(int r1, int r2, T constante) {
        for (int y = 0; y < columns; y++) {
            data[r1][y] += data[r2][y] * constante;
        }
    }

    void subtractRows(int r1, int r2, T constant) {
        for (int y = 0; y < columns; y++) {
            data[r1][y] -= data[r2][y] * constant;
        }
    }

    int searchColumns(T procurado) {
        for (int x = 0; x < rows; x++) {
            for (int y = 0; y < columns; y++) {
                if (data[x][y] == procurado) {
                    return y;
                }
            }
        }
        return -1;
    }
    void transpose() {

        Matrix<T> transposed(columns, rows, 0);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                transposed.data[j][i] = data[i][j];
            }
        }

        *this = transposed;
    }

    bool sequencial() {
        int expectedValue = 1;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (data[i][j] != expectedValue) {
                    return false;
                }
                expectedValue++;
            }
        }

        return true;
    }

    bool sequencialInverso() {
        int expectedValue = 1;

        for (int i = rows - 1; i >= 0; i--) {
            for (int j = 0; j < columns; j++) {
                if (data[i][j] != expectedValue) {
                    return false;
                }
                expectedValue++;
            }
        }
        return true;
    }
};

#endif