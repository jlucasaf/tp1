#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;
// Dominios

//implementacao: 190015187
// revisao:
class TUCodigo{
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
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};



class TUColuna{
};

class TUEmail{
};

class TULimite{
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
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

class TUSenha{
};

class TUTexto{
};


// Entidades
class TUConta{
};

class TUQuadro{
};

class TUCartao{
};



#endif // TESTES_H_INCLUDED
