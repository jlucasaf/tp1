#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"
using namespace std;

int main()
{
    cout << "Testes domínios." << endl;
    TUCodigo testeCodigo;
    switch(testeCodigo.run()){
        case TU::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TU::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    TUColuna testeColuna;
    switch(testeColuna.run()){
        case TU::SUCESSO: cout << "SUCESSO - COLUNA" << endl;
                                break;
        case TU::FALHA  : cout << "FALHA   - COLUNA" << endl;
                                break;
    }

    TUTexto testeTexto;
    switch(testeTexto.run()){
        case TU::SUCESSO: cout << "SUCESSO - TEXTO" << endl;
                                break;
        case TU::FALHA  : cout << "FALHA   - TEXTO" << endl;
                                break;
    }

    TUSenha testeSenha;
    switch(testeSenha.run()){
        case TU::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TU::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    TULimite testeLimite;
    switch(testeLimite.run()){
        case TU::SUCESSO: cout << "SUCESSO - LIMITE" << endl;
                                break;
        case TU::FALHA  : cout << "FALHA   - LIMITE" << endl;
                                break;
    }

    TUEmail testeEmail;
    switch(testeEmail.run()){
        case TU::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TU::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }
    cout << "Testes entidades." << endl;

    TUConta testeConta;
    switch(testeConta.run()){
        case TU::SUCESSO: cout << "SUCESSO - CONTA" << endl;
                                break;
        case TU::FALHA  : cout << "FALHA   - CONTA" << endl;
                                break;
    }

    TUQuadro testeQuadro;
    switch(testeQuadro.run()){
        case TU::SUCESSO: cout << "SUCESSO - QUADRO" << endl;
                                break;
        case TU::FALHA  : cout << "FALHA   - QUADRO" << endl;
                                break;
    }

    TUCartao testeCartao;
    switch(testeCartao.run()){
        case TU::SUCESSO: cout << "SUCESSO - CARTAO" << endl;
                                break;
        case TU::FALHA  : cout << "FALHA   - CARTAO" << endl;
                                break;
    }
    return 0;
}
