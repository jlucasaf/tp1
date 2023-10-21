#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

// Implementacao: 190015187
// Revisao:
class CodigoCartao {
private:
    string valor;
    bool validar(string codigo);
public:
    void setValor(string codigo);
    string getValor() const;
};

inline string CodigoCartao::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:
class Coluna {
private:
    int valor;
    bool validar(int codigo);
public:
    void setValor(int codigo);
    int getValor() const;
};

inline int Coluna::getValor() const {
    return valor;
}
#endif // DOMINIOS_H_INCLUDED
