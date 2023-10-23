#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

/**
 * @file dominios.h
 * @brief Este arquivo cont�m a defini��o de classes que representam dom�nios espec�ficos do sistema Kanban.
 */

// Implementacao: 190015187
// Revisao:

/**
 * @class Codigo
 * @brief Classe que representa um c�digo relacionado a tarefas no Kanban.
 */
class Codigo {
private:
    string valor;
    bool validar(string codigo); ///< Fun��o para validar o c�digo.
public:
    void setValor(string codigo); ///< Define o valor do c�digo.
    string getValor() const; ///< Obt�m o valor do c�digo.
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
    bool validar(string); ///< Fun��o para validar o nome da coluna.
public:
    void setValor(string); ///< Define o valor da coluna.
    string getValor() const; ///< Obt�m o valor da coluna.
};

inline string Coluna::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Email
 * @brief Classe que representa um endere�o de e-mail de um usu�rio do Kanban.
 */
class Email{
private:
    string valor;
    bool validar(string); ///< Fun��o para validar o formato do endere�o de e-mail.
public:
    void setValor(string); ///< Define o valor do endere�o de e-mail.
    string getValor() const; ///< Obt�m o valor do endere�o de e-mail.
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
    bool validar(int); ///< Fun��o para validar o valor limite.
public:
    void setValor(int); ///< Define o valor limite.
    int getValor() const; ///< Obt�m o valor limite.
};

inline int Limite::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Senha
 * @brief Classe que representa uma senha de usu�rio no Kanban.
 */
class Senha{
private:
    string valor;
    bool validar(string); ///< Fun��o para validar a senha.
public:
    void setValor(string); ///< Define o valor da senha.
    string getValor() const; ///< Obt�m o valor da senha.
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
    bool validar(string); ///< Fun��o para validar o texto.
public:
    void setValor(string); ///< Define o valor do texto.
    string getValor() const; ///< Obt�m o valor do texto.
};

inline string Texto::getValor() const {
    return valor;
}
#endif // DOMINIOS_H_INCLUDED
