/*
    Erro.hpp - v1.0 - 10 / 11 / 2024
    Author: Rubens Dias Bicalho
*/

#ifndef _ERRO_H_
#define _ERRO_H_

class Erro {

private:

    int erro;

protected:

    void setErro(int codigo) {
        erro = codigo;
    }

public:

    ~Erro() {}

    Erro() {
        erro = 0;
    }

    int getErro() {
        return(erro);
    }

};

#endif