#include <string>

#ifndef _ERRO_H_
#define _ERRO_H_

class Erro {
private:
    int erro;

public:
    ~Erro() {}

    Erro() : erro(0) {}

    static const std::string NO_ERROR;
    static const std::string DEFAULT_ERROR_MSG;

    int getErro() const {
        return erro;
    }

    bool hasError() const {
        return erro != 0;
    }

    virtual std::string getErroMsg() const {
        switch (erro) {
            case 0:
                return NO_ERROR;
            default:
                return DEFAULT_ERROR_MSG + " Código: " + std::to_string(erro);
        }
    }

protected:
    void setErro(int codigo) {
        erro = codigo;
    }

};

const std::string Erro::NO_ERROR = "[ERRO] Não há erro.";
const std::string Erro::DEFAULT_ERROR_MSG = "[ERRO] Ocorreu um erro.";

#endif
