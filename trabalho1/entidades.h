#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

// Implementacao: 190015187
// Revisao:
class Conta {
private:
    Email  email;
    Texto  nome;
    Senha  senha;
public:
    void setEmail(const Email&);
    Email getEmail() const;
    void setNome(const Texto&);
    Texto getNome() const;
    void setSenha(const Senha&);
    Senha getSenha() const;
};

inline void Conta::setEmail(const Email& email){
    this->email = email;
}

inline Email Conta::getEmail() const {
    return email;
}

inline void Conta::setNome(const Texto& nome){
    this->nome = nome;
}

inline Texto Conta::getNome() const {
    return nome;
}

inline void Conta::setSenha(const Senha& senha){
    this->senha = senha;
}

inline Senha Conta::getSenha() const {
    return senha;
}
#endif // ENTIDADES_H_INCLUDED
