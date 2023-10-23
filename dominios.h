#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

/**
 * @file dominios.h
 * @brief Este arquivo cont&eacute;m a defini&ccedil;&atilde;o de classes que representam dom&iacute;nios espec&iacute;ficos do sistema Kanban.
 */

// Implementacao: 190015187
// Revisao:

/**
 * @class Codigo
 * @brief Classe que representa um c&oacute;digo relacionado a tarefas no Kanban.
 * Formato LLDD
 * L &eacute; letra mai&uacute;scula (A - Z)
 * D &eacute; d&iacute;gito (0 - 9)
 */
class Codigo {
private:
    string valor;
    bool validar(string codigo); ///< Fun&ccedil;&atilde;o para validar o c&oacute;digo.
public:
    void setValor(string codigo); ///< Define o valor do c&oacute;digo.
    string getValor() const; ///< Obt&eacute;m o valor do c&oacute;digo.
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
    bool validar(string); ///< Fun&ccedil;&atilde;o para validar o nome da coluna.
public:
    void setValor(string); ///< Define o valor da coluna.
    string getValor() const; ///< Obt&eacute;m o valor da coluna.
};

inline string Coluna::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Email
 * @brief Classe que representa um endere&ccedil;o de e-mail de um usu&aacute;rio do Kanban.
 * Formato: nome@dom&iacute;nio
 * nome &eacute; composto por 2 a 10 caracteres
 * dom&iacute;nio &eacute; composto por 2 a 20 caracteres
 * Cada caractere &eacute; letra (A - Z ou a - z), d&iacute;gito (0 - 9) ou ponto (.)
 * Caractere @ n&atilde;o pode ser imediatamente precedido ou sucedido por ponto (.)
 * N&atilde;o h&aacute; pontos (.) em sequ&ecirc;ncia
 */
class Email{
private:
    string valor;
    bool validar(string); ///< Fun&ccedil;&atilde;o para validar o formato do endere&ccedil;o de e-mail.
public:
    void setValor(string); ///< Define o valor do endere&ccedil;o de e-mail.
    string getValor() const; ///< Obt&eacute;m o valor do endere&ccedil;o de e-mail.
};

inline string Email::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Limite
 * @brief Classe que representa um valor limite relacionado a tarefas no Kanban.
 * 5, 10, 15, 20
 */
class Limite {
private:
    int valor;
    bool validar(int); ///< Fun&ccedil;&atilde;o para validar o valor limite.
public:
    void setValor(int); ///< Define o valor limite.
    int getValor() const; ///< Obt&eacute;m o valor limite.
};

inline int Limite::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Senha
 * @brief Classe que representa uma senha de usu&aacute;rio no Kanban.
 * Formato: XXXXX
 * X &eacute; um dos seguintes caracteres: letra (A - Z, a - z), d&iacute;gito (0 - 9), sinal de pontua&ccedil;&atilde;o (.,;?!)
 * Pelo menos um caractere &eacute; letra mai&uacute;scula
 * Pelo menos um caractere &eacute; letra min&uacute;scula
 * Pelo menos um caractere &eacute; d&iacute;gito
 * Pelo menos um caractere &eacute; sinal de pontua&ccedil;&atilde;o
 * N&atilde;o h&aacute; caractere duplicado.
 */
class Senha{
private:
    string valor;
    bool validar(string); ///< Fun&ccedil;&atilde;o para validar a senha.
public:
    void setValor(string); ///< Define o valor da senha.
    string getValor() const; ///< Obt&eacute;m o valor da senha.
};

inline string Senha::getValor() const {
    return valor;
}

// Implementacao: 190015187
// Revisao:

/**
 * @class Texto
 * @brief Classe que representa um texto associado a uma tarefa no Kanban.
 * 5 a 30 caracteres
 * Cada caractere &eacute; letra (A - Z, a - z), d&iacute;gito (0 - 9), sinal de pontua&ccedil;&atilde;o (.,;?!) ou espa&ccedil;o em branco
 * N&atilde;o h&aacute; espa&ccedil;s em branco em sequ&ecirc;ncia
 * N&atilde;o h&aacute; sinais de pontua&ccedil;&atilde;o em sequ&ecirc;ncia
 * N&atilde;o h&aacute; acentua&ccedil;&atilde;o
 * Primeiro caractere &eacute; letra mai&uacute;scula
 * Primeiro caractere ap&oacute;s sinal de pontua&ccedil;&atilde; (exceto v&iacute;rgula ou ponto-e-v&iacute;rgula) &eacute; mai&uacute;scula
 */
class Texto{
private:
    string valor;
    bool validar(string); ///< Fun&ccedil;&atilde;o para validar o texto.
public:
    void setValor(string); ///< Define o valor do texto.
    string getValor() const; ///< Obt&eacute;m o valor do texto.
};

inline string Texto::getValor() const {
    return valor;
}
#endif // DOMINIOS_H_INCLUDED
