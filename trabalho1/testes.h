#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <string>

using namespace std;
// Dominios

//implementacao: 190015187
// revisao:

class TU{
protected:
    const static string TEXTO_VALIDO_ENTIDADE;
    const static string EMAIL_VALIDO_ENTIDADE;
    const static string SENHA_VALIDA_ENTIDADE;
    const static string CODIGO_VALIDO_ENTIDADE;
    const static int LIMITE_VALIDO_ENTIDADE = 10;

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

};
//implementacao: 190015187
// revisao:
class TUCodigo : public TU{
private:
    const static string CODIGO_VALIDO;
    const static string CODIGO_INVALIDO;
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    int run();

};


//implementacao: 190015187
// revisao:
class TUColuna: public TU{
    private:
    const static string COLUNA_INVALIDA;
    const static string COLUNA_VALIDA;
    Coluna *coluna;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    int run();
};

//implementacao: 190015187
// revisao:
class TUEmail : public TU{
    private:
    const static string EMAIL_INVALIDO;
    const static string EMAIL_VALIDO;
    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    int run();
};

//implementacao: 190015187
// revisao:
class TULimite : public TU{
private:
    const static int LIMITE_INVALIDO = 25;
    const static int LIMITE_VALIDO = 10;
    Limite *limite;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    int run();
};

//implementacao: 190015187
// revisao:
class TUSenha : public TU{
    private:
    const static string SENHA_INVALIDA;
    const static string SENHA_VALIDA;
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    int run();
};

//implementacao: 190015187
// revisao:
class TUTexto : public TU{
    private:
    const static string TEXTO_INVALIDO;
    const static string TEXTO_VALIDO;
    Texto *texto;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:

    int run();
};


// Entidades
//implementacao: 190015187
// revisao:
class TUConta : public TU{
    private:
    const static string NOME_VALIDO;
    Conta *conta;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();
public:

    int run();
};

class TUQuadro : public TU{
private:
    Quadro *quadro;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();
public:

    int run();
};

class TUCartao : public TU{
private:
    Cartao *cartao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();
public:

    int run();
};



#endif // TESTES_H_INCLUDED
