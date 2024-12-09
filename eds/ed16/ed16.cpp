/**
 * Atividade 16 - v1.0. - 01 / 12 / 2024
 * Author: Rubens Dias Bicalho
 */

/**
 * Dependencias
 */
#include <iostream>
#include <limits>
#include <string>

#include "array.hpp"

/**
 * Funções
 */

void pause(std::string text) {
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl << text;
    std::cin.ignore();
    getline(std::cin, dummy);
    std::cout << std::endl;
}

// Coloquei as funções no arquivo main, pois era o que fazia mais sentido na minha cabeça,
// não entendi direito se você queria que colocasse aqui mesmo ou dentro da classe do objeto.

// Quanto a compatibilidade com o código em C, tentei fazer o mais proximo possivel, mas não sei se esta como você queria.
// Se tiver alguma observação sobre essa questão ou no codigo como um todo por favor me avise.
// Eu sempre fico tentando quebrar a cabeça para tentar fazer o codigo mais proximo possivel do que você quer, mas as vezes
// é dificil entender só com base nos guias.

template <typename T>
Array<T>* array_push_back(Array<T> *array, int value) {
    if (!array) return nullptr; // Tem alguma diferença entre retornar a função assim e do jeito que você faz em sala?
    if (array->dataIsNull()) return nullptr; // Aprendi a organizar o codigo dessa maneira em um curso de programação de jogos em c++, mas não sei se tem
    Array<int> *newArray = new Array<int>(array->getLenght() + 1, 0); // alguma diferença prática ou em termos de performance de procesamento.
    for (int i = 0; i < array->getLenght(); ++i) {
        newArray->set(i, array->get(i));
    }
    newArray->set(array->getLenght(), value);
    return newArray;
}

template <typename T>
Array<T>* array_pop_back(Array<T> *array) {
    if (!array) return nullptr;
    if (array->dataIsNull()) return nullptr;
    if (array->getLenght() <= 1) return nullptr;
    Array<int> *newArray = new Array<int>(array->getLenght() - 1, 0);
    for (int i = 0; i < newArray->getLenght(); ++i) {
        newArray->set(i, array->get(i));
    }
    return newArray;
}

template <typename T>
Array<T>* array_push_front(int value, Array<T> *array) {
    if (!array) return nullptr;
    if (array->dataIsNull()) return nullptr;
    Array<int> *newArray = new Array<int>(array->getLenght() + 1, 0);
    newArray->set(0, value);
    for (int i = 1; i < newArray->getLenght(); ++i) {
        newArray->set(i, array->get(i - 1));
    }
    return newArray;
}

template <typename T>
Array<T>* array_pop_front(Array<T> *array) {
    if (!array) return nullptr;
    if (array->dataIsNull()) return nullptr;
    if (array->getLenght() <= 1) return nullptr;
    Array<int> *newArray = new Array<int>(array->getLenght() - 1, 0);
    for (int i = 0; i < newArray->getLenght(); ++i) {
        newArray->set(i, array->get(i + 1));
    }
    return newArray;
}

template <typename T>
Array<T>* array_push_mid(Array<T> *array, int value) {
    if (!array) return nullptr;
    if (array->dataIsNull()) return nullptr;
    Array<int> *newArray = new Array<int>(array->getLenght() + 1, 0);
    for (int i = 0; i < newArray->getLenght(); ++i) {
        if (i < newArray->getLenght() / 2) {
            newArray->set(i, array->get(i));
        } else if (i == newArray->getLenght() / 2) {
            newArray->set(i, value);
        } else {
            newArray->set(i, array->get(i - 1));
        }
    }
    return newArray;
}

template <typename T>
Array<T>* array_pop_mid(Array<T> *array) {
    if (!array) return nullptr;
    if (array->dataIsNull()) return nullptr;
    if (array->getLenght() <= 1) return nullptr;
    Array<int> *newArray = new Array<int>(array->getLenght() - 1, 0);
    for (int i = 0; i < newArray->getLenght(); ++i) {
        if (i < newArray->getLenght() / 2) {
            newArray->set(i, array->get(i));
        } else {
            newArray->set(i, array->get(i + 1));
        }
    }
    return newArray;
}

template <typename T>
int array_cmp(Array<T>* p, Array<T>* q) {
    int soma_1 = 0, soma_2 = 0;
    if (p->dataIsValid() && p->getLenght() > 0) {
        for (int i = 0; i < p->getLenght(); i++) {
            soma_1 += p->get(i);
        }
    }
    if (q->dataIsValid() && q->getLenght() > 0) {
        for (int i = 0; i < q->getLenght(); i++) {
            soma_2 += q->get(i);
        }
    }
    return soma_1 - soma_2;
}

template <typename T>
Array<T>* array_cat(Array<T>* p, Array<T>* q) {
    Array<int> *newArray = new Array<int>(p->getLenght() + q->getLenght(), 0);
    if (p && p->getLenght() > 0 && p->dataIsValid()) {
        for (int i = 0; i < p->getLenght(); i++) {
            newArray->set(i, p->get(i));
        }
    }
    if (q && q->getLenght() > 0 && q->dataIsValid()) {
        for (int i = 0; i < q->getLenght(); i++) {
            newArray->set(i + p->getLenght(), q->get(i));
        }
    }
    return newArray;
}

template <typename T>
Array<T>* intArray_seek(Array<T>* array, int x) {
    if (!array) return nullptr;
    if (array->dataIsNull()) return nullptr;
    if (array->getLenght() <= 0) return nullptr;

    for (int i = 0; i < array->getLenght(); i++) {
        if (array->get(i) == x) {
            return getRefAdr(i);
        }
    }

    return nullptr;
}

/**
 * Métodos
 */
void method_00() {}

void method_01() {
    int input_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_length = 10;
    Array<int> *array = new Array<int>(input_length, input_data);
    Array<int> *newArray = array_push_back(array, 11);
    newArray->print();
    pause("Apertar ENTER para continuar");
}

void method_02() {
    int input_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_length = 10;
    Array<int> *array = new Array<int>(input_length, input_data);
    Array<int> *newArray = array_pop_back(array);
    newArray->print();
    pause("Apertar ENTER para continuar");
}

void method_03() {
    int input_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_length = 10;
    Array<int> *array = new Array<int>(input_length, input_data);
    Array<int> *newArray = array_push_front(0, array);
    newArray->print();
    pause("Apertar ENTER para continuar");
}

void method_04() {
    int input_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_length = 10;
    Array<int> *array = new Array<int>(input_length, input_data);
    Array<int> *newArray = array_pop_front(array);
    newArray->print();
    pause("Apertar ENTER para continuar");
}

void method_05() {
    int input_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_length = 10;
    Array<int> *array = new Array<int>(input_length, input_data);
    Array<int> *newArray = array_push_mid(array, 0);
    newArray->print();
    pause("Apertar ENTER para continuar");
}

void method_06() {
    int input_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_length = 10;
    Array<int> *array = new Array<int>(input_length, input_data);
    Array<int> *newArray = array_pop_mid(array);
    newArray->print();
    pause("Apertar ENTER para continuar");
}

void method_07() {
    int input_data1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_data2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_length1 = 10;
    int input_length2 = 10;
    Array<int> *p = new Array<int>(input_length1, input_data1);
    Array<int> *q = new Array<int>(input_length2, input_data2);
    int result = array_cmp(p, q);
    std::cout << "Resultado: " << result << std::endl;
    pause("Apertar ENTER para continuar");
}

void method_08() {
    int input_data1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_data2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_length1 = 10;
    int input_length2 = 10;
    Array<int> *p = new Array<int>(input_length1, input_data1);
    Array<int> *q = new Array<int>(input_length2, input_data2);
    Array<int> *newArray = array_cat(p, q);
    newArray->print();
    pause("Apertar ENTER para continuar");
}

void method_09() {
    int input_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input_length = 10;
    Array<int> *array = new Array<int>(input_length, input_data);
    Array<int> *result = intArray_seek(array, 5);
    if (result) {
        std::cout << "Resultado: " << result->get(0) << std::endl;
    } else {
        std::cout << "Resultado: Nulo" << std::endl;
    }
    pause("Apertar ENTER para continuar");
}


/**
 * Main
 */
int main (int argc, char** argv) {

    int x = 0;

    do {

        std::cout << "\nAtividade 16 - v1.0\n " << std::endl;

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
            case 1: method_01(); break;
            case 2: method_02(); break;
            case 3: method_03(); break;
            case 4: method_04(); break;
            case 5: method_05(); break;
            case 6: method_06(); break;
            case 7: method_07(); break;
            case 8: method_08(); break;
            default:
            std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
        }

    } while (x != 0);

    pause("Apertar ENTER para terminar");

    return (0);

}