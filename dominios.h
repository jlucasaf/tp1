#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

/**
 * @file dominios.h
 * @brief Este arquivo contém a definição de classes que representam domínios específicos do sistema Kanban.
 */

// Implementacao: 190015187
// Revisao:

/**
 * @class Codigo
 * @brief Classe que representa um código relacionado a tarefas no Kanban.
 */
class Codigo {
private:
    string valor;
    bool validar(string codigo); ///< Função para validar o código.
public:
    void setValor(string codigo); ///< Define o valor do código.
    string getValor() const; ///< Obtém o valor do código.
};

inline string Codigo::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Coluna
 * @brief Classe que representa uma coluna no quadro Kanban.
 */
class Coluna {
private:
    string valor;
    bool validar(string); ///< Função para validar o nome da coluna.
public:
    void setValor(string); ///< Define o valor da coluna.
    string getValor() const; ///< Obtém o valor da coluna.
};

inline string Coluna::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Email
 * @brief Classe que representa um endereço de e-mail de um usuário do Kanban.
 */
class Email{
private:
    string valor;
    bool validar(string); ///< Função para validar o formato do endereço de e-mail.
public:
    void setValor(string); ///< Define o valor do endereço de e-mail.
    string getValor() const; ///< Obtém o valor do endereço de e-mail.
};

inline string Email::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Limite
 * @brief Classe que representa um valor limite relacionado a tarefas no Kanban.
 */
class Limite {
private:
    int valor;
    bool validar(int); ///< Função para validar o valor limite.
public:
    void setValor(int); ///< Define o valor limite.
    int getValor() const; ///< Obtém o valor limite.
};

inline int Limite::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Senha
 * @brief Classe que representa uma senha de usuário no Kanban.
 */
class Senha{
private:
    string valor;
    bool validar(string); ///< Função para validar a senha.
public:
    void setValor(string); ///< Define o valor da senha.
    string getValor() const; ///< Obtém o valor da senha.
};

inline string Senha::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Texto
 * @brief Classe que representa um texto associado a uma tarefa no Kanban.
 */
class Texto{
private:
    string valor;
    bool validar(string); ///< Função para validar o texto.
public:
    void setValor(string); ///< Define o valor do texto.
    string getValor() const; ///< Obtém o valor do texto.
};

inline string Texto::getValor() const {
    return valor;
}
#endif // DOMINIOS_H_INCLUDED
