#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

// Implementacao: 190015187
// Revisao:
class Codigo {
private:
    string valor;
    bool validar(string codigo);
public:
    void setValor(string codigo);
    string getValor() const;
};

inline string Codigo::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:
class Coluna {
private:
    int valor;
    bool validar(int);
public:
    void setValor(int);
    int getValor() const;
};

inline int Coluna::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:
class Email{
private:
    string valor;
    bool validar(string);
public:
    void setValor(string);
    string getValor() const;
};

inline string Email::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:
class Limite {
private:
    int valor;
    bool validar(int);
public:
    void setValor(int);
    int getValor() const;

};

inline int Limite::getValor() const {
    return valor;
}


// Implementacao: 190015187
// Revisao:
class Senha{
private:
    string valor;
    bool validar(string);
public:
    void setValor(string);
    string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:
class Texto{
private:
    string valor;
    bool validar(string);
public:
    void setValor(string);
    string getValor() const;
};

inline string Texto::getValor() const {
    return valor;
}
#endif // DOMINIOS_H_INCLUDED
