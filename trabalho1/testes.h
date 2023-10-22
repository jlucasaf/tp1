#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;
// Dominios

//implementacao: 190015187
// revisao:

class TU{

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

};
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
class TUConta : public TU{
};

class TUQuadro : public TU{
};

class TUCartao : public TU{
};



#endif // TESTES_H_INCLUDED
