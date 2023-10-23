#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

/**
 * @file entidades.h
 * @brief Este arquivo cont�m a defini��o de classes que representam as entidades do sistema Kanban.
 */

// Implementacao: 190015187
// Revisao:

/**
 * @class Conta
 * @brief Classe que representa a entidade "Conta" no sistema Kanban.
 */
class Conta {
private:
    Email  email; ///< Representa o endere�o de e-mail da conta.
    Texto  nome; ///< Representa o nome associado � conta.
    Senha  senha; ///< Representa a senha da conta.
public:
    //setters
    void setEmail(const Email&); ///< Define o endere�o de e-mail da conta.
    void setNome(const Texto&); ///< Define o nome da conta.
    void setSenha(const Senha&); ///< Define a senha da conta.

    //getters
    Email getEmail() const; ///< Obt�m o endere�o de e-mail da conta.
    Texto getNome() const; ///< Obt�m o nome da conta.
    Senha getSenha() const; ///< Obt�m a senha da conta.
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

/**
 * @class Quadro
 * @brief Classe que representa a entidade "Quadro" no sistema Kanban.
 */
class Quadro{
private:
     Codigo codigo; ///< Representa o c�digo do quadro.
     Texto nome; ///< Representa o nome do quadro.
     Texto descricao; ///< Representa a descri��o do quadro.
     Limite limite; ///< Representa o limite de tarefas do quadro.

public:
    // setters
    void setCodigo(const Codigo&); ///< Define o c�digo do quadro.
    void setLimite(const Limite&); ///< Define o limite de tarefas do quadro.
    void setNome(const Texto&); ///< Define o nome do quadro.
    void setDescricao(const Texto&); ///< Define a descri��o do quadro.

    //getters
    Texto getDescricao() const; ///< Obt�m a descri��o do quadro.
    Texto getNome() const; ///< Obt�m o nome do quadro.
    Codigo getCodigo() const; ///< Obt�m o c�digo do quadro.
    Limite getLimite() const; ///< Obt�m o limite de tarefas do quadro.
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

/**
 * @class Cartao
 * @brief Classe que representa a entidade "Cartao" no sistema Kanban.
 */
class Cartao{
private:
    Codigo codigo; ///< Representa o c�digo do cart�o.
    Texto nome; ///< Representa o nome do cart�o.
    Texto descricao; ///< Representa a descri��o do cart�o.
    Coluna coluna; ///< Representa a coluna associada ao cart�o.
public:
    // setters
    void setCodigo(const Codigo&); ///< Define o c�digo do cart�o.
    void setNome(const Texto&); ///< Define o nome do cart�o.
    void setDescricao(const Texto&); ///< Define a descri��o do cart�o.
    void setColuna(const Coluna&); ///< Define a coluna associada ao cart�o.

    // getters
    Codigo getCodigo() const; ///< Obt�m o c�digo do cart�o.
    Texto getNome() const; ///< Obt�m o nome do cart�o.
    Texto getDescricao() const; ///< Obt�m a descri��o do cart�o.
    Coluna getColuna() const; ///< Obt�m a coluna associada ao cart�o.
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
