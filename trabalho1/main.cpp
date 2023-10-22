#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"
using namespace std;

int main()
{
    TUCodigo testeCodigo;
    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    TUColuna testeColuna;
    switch(testeColuna.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - COLUNA" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - COLUNA" << endl;
                                break;
    }

    TUTexto testeTexto;
    switch(testeTexto.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - TEXTO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - TEXTO" << endl;
                                break;
    }

    TUSenha testeSenha;
    switch(testeSenha.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    TULimite testeLimite;
    switch(testeLimite.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - LIMITE" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - LIMITE" << endl;
                                break;
    }

    TUEmail testeEmail;
    switch(testeEmail.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }
    return 0;
}
