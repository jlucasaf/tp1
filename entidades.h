#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

/**
 * @file entidades.h
 * @brief Este arquivo contém a definição de classes que representam as entidades do sistema Kanban.
 */

// Implementacao: 190015187
// Revisao:

/**
 * @class Conta
 * @brief Classe que representa a entidade "Conta" no sistema Kanban.
 */
class Conta {
private:
    Email  email; ///< Representa o endereço de e-mail da conta.
    Texto  nome; ///< Representa o nome associado à conta.
    Senha  senha; ///< Representa a senha da conta.
public:
    //setters
    void setEmail(const Email&); ///< Define o endereço de e-mail da conta.
    void setNome(const Texto&); ///< Define o nome da conta.
    void setSenha(const Senha&); ///< Define a senha da conta.

    //getters
    Email getEmail() const; ///< Obtém o endereço de e-mail da conta.
    Texto getNome() const; ///< Obtém o nome da conta.
    Senha getSenha() const; ///< Obtém a senha da conta.
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
     Codigo codigo; ///< Representa o código do quadro.
     Texto nome; ///< Representa o nome do quadro.
     Texto descricao; ///< Representa a descrição do quadro.
     Limite limite; ///< Representa o limite de tarefas do quadro.

public:
    // setters
    void setCodigo(const Codigo&); ///< Define o código do quadro.
    void setLimite(const Limite&); ///< Define o limite de tarefas do quadro.
    void setNome(const Texto&); ///< Define o nome do quadro.
    void setDescricao(const Texto&); ///< Define a descrição do quadro.

    //getters
    Texto getDescricao() const; ///< Obtém a descrição do quadro.
    Texto getNome() const; ///< Obtém o nome do quadro.
    Codigo getCodigo() const; ///< Obtém o código do quadro.
    Limite getLimite() const; ///< Obtém o limite de tarefas do quadro.
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
    Codigo codigo; ///< Representa o código do cartão.
    Texto nome; ///< Representa o nome do cartão.
    Texto descricao; ///< Representa a descrição do cartão.
    Coluna coluna; ///< Representa a coluna associada ao cartão.
public:
    // setters
    void setCodigo(const Codigo&); ///< Define o código do cartão.
    void setNome(const Texto&); ///< Define o nome do cartão.
    void setDescricao(const Texto&); ///< Define a descrição do cartão.
    void setColuna(const Coluna&); ///< Define a coluna associada ao cartão.

    // getters
    Codigo getCodigo() const; ///< Obtém o código do cartão.
    Texto getNome() const; ///< Obtém o nome do cartão.
    Texto getDescricao() const; ///< Obtém a descrição do cartão.
    Coluna getColuna() const; ///< Obtém a coluna associada ao cartão.
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
