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

inline void Conta::setEmail(const Email& _email){
    this->email = _email;
}

inline Email Conta::getEmail() const {
    return email;
}

inline void Conta::setNome(const Texto& _nome){
    this->nome = _nome;
}

inline Texto Conta::getNome() const {
    return nome;
}

inline void Conta::setSenha(const Senha& _senha){
    this->senha = _senha;
}

inline Senha Conta::getSenha() const {
    return senha;
}


// Implementacao: 190015187
// Revisao:

class Quadro{
private:
     Codigo codigo;
     Texto nome;
     Texto descricao;
     Limite limite;

public:
    void setCodigo(const Codigo&);
    Codigo getCodigo() const;

    void setNome(const Texto&);
    Texto getNome() const;

    void setDescricao(const Texto&);
    Texto getDescricao() const;

    void setLimite(const Limite&);
    Limite getLimite() const;
};

inline void Quadro::setCodigo(const Codigo& _codigo){
    this->codigo = _codigo;
}

inline Codigo Quadro::getCodigo() const {
    return codigo;
}

inline void Quadro::setNome(const Texto& _nome){
    this->nome = _nome;
}

inline Texto Quadro::getNome() const {
    return nome;
}

inline void Quadro::setDescricao(const Texto& _descricao){
    this->descricao = _descricao;
}

inline Texto Quadro::getDescricao() const {
    return descricao;
}


inline void Quadro::setLimite(const Limite& _limite){
    this->limite = _limite;
}

inline Limite Quadro::getLimite() const {
    return limite;
}
#endif // ENTIDADES_H_INCLUDED
