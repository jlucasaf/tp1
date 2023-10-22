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
    //setters
    void setEmail(const Email&);
    void setNome(const Texto&);
    void setSenha(const Senha&);

    //getters
    Email getEmail() const;
    Texto getNome() const;
    Senha getSenha() const;


};

// Conta setters
inline void Conta::setEmail(const Email& _email){
    this->email = _email;
}

inline void Conta::setNome(const Texto& _nome){
    this->nome = _nome;
}

inline void Conta::setSenha(const Senha& _senha){
    this->senha = _senha;
}

// Conta getters
inline Email Conta::getEmail() const {
    return email;
}

inline Texto Conta::getNome() const {
    return nome;
}

inline Senha Conta::getSenha() const {
    return senha;
}



// ------- QUADRO -----------
// Implementacao: 190015187
// Revisao:

class Quadro{
private:
     Codigo codigo;
     Texto nome;
     Texto descricao;
     Limite limite;

public:
    // setters
    void setCodigo(const Codigo&);
    void setLimite(const Limite&);
    void setNome(const Texto&);
    void setDescricao(const Texto&);

    //getters
    Texto getDescricao() const;
    Texto getNome() const;
    Codigo getCodigo() const;
    Limite getLimite() const;



};

// Quadro setters
inline void Quadro::setCodigo(const Codigo& _codigo){
    this->codigo = _codigo;
}
inline void Quadro::setNome(const Texto& _nome){
    this->nome = _nome;
}
inline void Quadro::setDescricao(const Texto& _descricao){
    this->descricao = _descricao;
}
inline void Quadro::setLimite(const Limite& _limite){
    this->limite = _limite;
}

// Quadro Getters
inline Codigo Quadro::getCodigo() const {
    return codigo;
}
inline Texto Quadro::getNome() const {
    return nome;
}
inline Texto Quadro::getDescricao() const {
    return descricao;
}
inline Limite Quadro::getLimite() const {
    return limite;
}


// ------- CARTAO -----------
// Implementacao: 190015187
// Revisao:

class Cartao{
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Coluna coluna;
public:
    // setters
    void setCodigo(const Codigo&);
    void setNome(const Texto&);
    void setDescricao(const Texto&);
    void setColuna(const Coluna&);


    // getters
    Codigo getCodigo() const;
    Texto getNome() const;
    Texto getDescricao() const;
    Coluna getColuna() const;
};

// Cartao setters
inline void Cartao::setCodigo(const Codigo& _codigo){
    this->codigo = _codigo;
}
inline void Cartao::setNome(const Texto& _nome){
    this->nome = _nome;
}
inline void Cartao::setDescricao(const Texto& _descricao){
    this->descricao = _descricao;
}
inline void Cartao::setColuna(const Coluna& _coluna){
    this->coluna = _coluna;
}

// Cartao getters
inline Codigo Cartao::getCodigo() const {
    return codigo;
}
inline Texto Cartao::getNome() const {
    return nome;
}
inline Texto Cartao::getDescricao() const {
    return descricao;
}
inline Coluna Cartao::getColuna() const {
    return coluna;
}





#endif // ENTIDADES_H_INCLUDED
