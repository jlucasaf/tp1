#include "testes.h"

const std::string TUCodigo::CODIGO_VALIDO = "AA12";
const std::string TUCodigo::CODIGO_INVALIDO = "a1B1";

// TUCodigo
// implementacao: 190015187
void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;

}
void TUCodigo::tearDown(){
    delete codigo;
}
void TUCodigo::testarCenarioFalha()
{

    try{
        codigo->setValor(CODIGO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if(codigo->getValor() == CODIGO_INVALIDO)
            estado = FALHA;
    }
}
void TUCodigo::testarCenarioSucesso()
{

    try
    {
        codigo->setValor(CODIGO_VALIDO);
        if(codigo->getValor() != CODIGO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}
int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



// TULimite
// implementacao: 190015187
void TULimite::setUp(){
    limite = new Limite();
    estado = SUCESSO;

}
void TULimite::tearDown(){
    delete limite;
}
void TULimite::testarCenarioFalha()
{

    try{
        limite->setValor(LIMITE_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if(limite->getValor() == LIMITE_INVALIDO)
            estado = FALHA;
    }
}
void TULimite::testarCenarioSucesso()
{

    try
    {
        limite->setValor(LIMITE_VALIDO);
        if(limite->getValor() != LIMITE_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}
int TULimite::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}







