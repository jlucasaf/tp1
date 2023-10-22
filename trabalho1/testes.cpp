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

const std::string TU::TEXTO_VALIDO_ENTIDADE = "Olá, tudo bem.";
const std::string TU::EMAIL_VALIDO_ENTIDADE = "email@dominio";
const std::string TU::SENHA_VALIDA_ENTIDADE = "B1;t5";
const std::string TU::CODIGO_VALIDO_ENTIDADE = "BA54";
const std::string TUConta::NOME_VALIDO = "Betina alves";

const string DESCRICAO_VALIDA = "Essa e uma descricao valida.";
const string NOME_VALIDO_TESTE = "Esse e um quadro.";
const string COLUNA_VALIDA_TESTE = "SOLICITADO";




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

// ---------  ENTIDADES ------------

//TUConta

void TUConta::setUp()
{
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown()
{
    delete conta;
}

void TUConta::testarCenario()
{
    Email email;
    Texto nome;
    Senha senha;

    email.setValor(EMAIL_VALIDO_ENTIDADE);
    conta->setEmail(email);
    if(conta->getEmail().getValor() != EMAIL_VALIDO_ENTIDADE)
    estado = FALHA;

    nome.setValor(NOME_VALIDO);
    conta->setNome(nome);
    if(conta->getNome().getValor() != NOME_VALIDO)
    estado = FALHA;

    senha.setValor(SENHA_VALIDA_ENTIDADE);
    conta->setSenha(senha);
    if(conta->getSenha().getValor() != SENHA_VALIDA_ENTIDADE)
        estado = FALHA;

}

int TUConta::run()
{
    setUp();
    testarCenario();
    tearDown();
    return estado;
}

//TUQuadro

void TUQuadro::setUp()
{
    quadro = new Quadro();
    estado = SUCESSO;
}

void TUQuadro::tearDown()
{
    delete quadro;
}

void TUQuadro::testarCenario()
{
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Limite limite;

    codigo.setValor(CODIGO_VALIDO_ENTIDADE);
    quadro->setCodigo(codigo);
    if(quadro->getCodigo().getValor() != CODIGO_VALIDO_ENTIDADE)
    estado = FALHA;

    nome.setValor(NOME_VALIDO_TESTE);
    quadro->setNome(nome);
    if(quadro->getNome().getValor() != NOME_VALIDO_TESTE)
    estado = FALHA;

    descricao.setValor(DESCRICAO_VALIDA);
    quadro->setDescricao(descricao);
    if(quadro->getDescricao().getValor() != DESCRICAO_VALIDA)
        estado = FALHA;

    limite.setValor(LIMITE_VALIDO_ENTIDADE);
    quadro->setLimite(limite);
    if(quadro->getLimite().getValor() != LIMITE_VALIDO_ENTIDADE)
        estado = FALHA;


}

int TUQuadro::run()
{
    setUp();
    testarCenario();
    tearDown();
    return estado;
}

//TUCartao

void TUCartao::setUp()
{
    cartao = new Cartao();
    estado = SUCESSO;
}

void TUCartao::tearDown()
{
    delete cartao;
}

void TUCartao::testarCenario()
{
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Coluna coluna;

    codigo.setValor(CODIGO_VALIDO_ENTIDADE);
    cartao->setCodigo(codigo);
    if(cartao->getCodigo().getValor() != CODIGO_VALIDO_ENTIDADE)
    estado = FALHA;

    nome.setValor(NOME_VALIDO_TESTE);
    cartao->setNome(nome);
    if(cartao->getNome().getValor() != NOME_VALIDO_TESTE)
    estado = FALHA;

    descricao.setValor(DESCRICAO_VALIDA);
    cartao->setDescricao(descricao);
    if(cartao->getDescricao().getValor() != DESCRICAO_VALIDA)
        estado = FALHA;

    coluna.setValor(COLUNA_VALIDA_TESTE);
    cartao->setColuna(coluna);
    if(cartao->getColuna().getValor() != COLUNA_VALIDA_TESTE)
        estado = FALHA;


}

int TUCartao::run()
{
    setUp();
    testarCenario();
    tearDown();
    return estado;
}









