#include "testes.h"

const std::string TUCodigo::CODIGO_VALIDO = "AA12";
const std::string TUCodigo::CODIGO_INVALIDO = "a1B1";

const std::string TUEmail::EMAIL_VALIDO = "email@dominio";
const std::string TUEmail::EMAIL_INVALIDO = "ema..awwdas.@.Teste.";


const std::string TUSenha::SENHA_VALIDA = "Ac!12";
const std::string TUSenha::SENHA_INVALIDA = "ema..@Teste. ";


const std::string TUTexto::TEXTO_VALIDO = "Oi, bom dia.";
const std::string TUTexto::TEXTO_INVALIDO = "oi";

const std::string TUColuna::COLUNA_VALIDA = "SOLICITADO";
const std::string TUColuna::COLUNA_INVALIDA = "solicitado";


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

// TUTexto
// implementacao: 190015187
void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;

}
void TUTexto::tearDown(){
    delete texto;
}
void TUTexto::testarCenarioFalha()
{

    try{
        texto->setValor(TEXTO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if(texto->getValor() == TEXTO_INVALIDO)
            estado = FALHA;
    }
}
void TUTexto::testarCenarioSucesso()
{

    try
    {
        texto->setValor(TEXTO_VALIDO);
        if(texto->getValor() != TEXTO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}
int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// TUColuna
// implementacao: 190015187
void TUColuna::setUp(){
    coluna = new Coluna();
    estado = SUCESSO;

}
void TUColuna::tearDown(){
    delete coluna;
}
void TUColuna::testarCenarioFalha()
{

    try{
        coluna->setValor(COLUNA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if(coluna->getValor() == COLUNA_INVALIDA)
            estado = FALHA;
    }
}
void TUColuna::testarCenarioSucesso()
{

    try
    {
        coluna->setValor(COLUNA_VALIDA);
        if(coluna->getValor() != COLUNA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}
int TUColuna::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// TUEmail
// implementacao: 190015187
void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;

}
void TUEmail::tearDown(){
    delete email;
}
void TUEmail::testarCenarioFalha()
{

    try{
        email->setValor(EMAIL_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if(email->getValor() == EMAIL_INVALIDO)
            estado = FALHA;
    }
}
void TUEmail::testarCenarioSucesso()
{

    try
    {
        email->setValor(EMAIL_VALIDO);
        if(email->getValor() != EMAIL_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}
int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// TUSenha
// implementacao: 190015187
void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;

}
void TUSenha::tearDown(){
    delete senha;
}
void TUSenha::testarCenarioFalha()
{

    try{
        senha->setValor(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if(senha->getValor() == SENHA_INVALIDA)
            estado = FALHA;
    }
}
void TUSenha::testarCenarioSucesso()
{

    try
    {
        senha->setValor(SENHA_VALIDA);
        if(senha->getValor() != SENHA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}
int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}









