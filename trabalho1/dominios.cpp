#include "dominios.h"
#include <regex>
#include <cctype>
#include <set>
#include <locale>

using namespace std;



// Implementação: 190015187
// revisão:
bool Codigo::validar(string codigo)
{
    if(codigo.empty() || codigo.size() != 4)
        return false;

    // Usa de uma expressão regular para verificar o formato LLDD.
    regex pattern("^[A-Z]{2}[0-9]{2}$");

    return regex_match(codigo, pattern);
}

// Implementação: 190015187
// revisão:
void Codigo::setValor(string codigo)
{

    if(!validar(codigo))
        throw invalid_argument("Argumento invalido.");

    this->valor = codigo;
}


// ---- COLUNA ------
// Implementação: 190015187
// revisão:
bool Coluna::validar(string coluna)
{
    if(coluna.empty() ||  (coluna != "SOLICITADO" && coluna != "EM EXECUCAO" && coluna != "CONCLUIDO") )
        return false;

    return true;

}

// Implementação: 190015187
// revisão:
void Coluna::setValor(string coluna)
{
    if(!validar(coluna))
        throw invalid_argument("Argumento invalido.");

    this->valor = coluna;
}


// ----- EMAIl -------
// Implementação: 190015187
// revisão:
bool Email::validar(string email)
{

    if(email.empty())
        return false;

    // Expressao regular para verificar o formato do email.
    regex pattern("^(?!.*\\.{2})[A-Za-z0-9.]{2,10}@(?!\\.)[A-Za-z0-9.]{2,20}$");

    // Verifica se a string corresponde ao padrao.
    return regex_match(email, pattern);

}

// Implementação: 190015187
// revisão:
void Email::setValor(string email)
{
    if(!validar(email))
        throw invalid_argument("Argumento invalido.");
    this->valor = email;
}

//-------- Limite -----------

// Implementação: 190015187
// revisão:
bool Limite::validar(int limite)
{
    if((limite % 5 != 0) || (limite > 20) || (limite < 5) )
        return false;

    return true;
}

// Implementação: 190015187
// revisão:
void Limite::setValor(int limite)
{

    if(!validar(limite))
        throw invalid_argument("Argumento invalido.");

    this->valor = limite;
}

// ---------- Senha ----------
// Implementação: 190015187
// revisão:

bool Senha::validar(string senha)
{
    // Verifica se a senha tem pelo menos 5 caracteres.
    if (senha.length() < 5) {
        return false;
    }

    bool temMaiuscula = false, temMinuscula = false, temDigito = false, temSinalPontuacao = false;

    // Define um set de char para verificacao de caracteres unicos
    set<char> caracteresUnicos;

    for (char c : senha) {
        caracteresUnicos.insert(c);

        if (isupper(c)) {
            temMaiuscula = true;
        } else if (islower(c)) {
            temMinuscula = true;
        } else if (isdigit(c)) {
            temDigito = true;
        } else if (ispunct(c)) {
            temSinalPontuacao = true;
        }
    }

    return temMaiuscula && temMinuscula && temDigito && temSinalPontuacao &&
           caracteresUnicos.size() == senha.length();

}

// Implementação: 190015187
// revisão:
void Senha::setValor(string senha)
{
    if(!validar(senha))
        throw invalid_argument("Argumento invalido.");
    this->valor = senha;
}

// --------- Texto ---------------

// Implementação: 190015187
// revisão:

bool Texto::validar(string texto)
{
    // Verifique o comprimento do texto.
    if (texto.length() < 5 || texto.length() > 30) {
        return false;
    }

     for (char c : texto) {
        if (isalpha(c) && (c >= 128 || c < 0)) {
            return false; // Encontrou um caractere acentuado.
        }
     }

    char caractereAnterior = '\0'; // Rastreia o caractere anterior.
    bool primeiroCaractereMaiusculo = false; // Rastreia se o primeiro caractere é maiúsculo.

    // Configura a localização C para não considerar acentuação.


    locale loc("C");

    for (char c : texto) {
        if (!isalnum(c, loc) && c != ' ' && c != ',' && c != '.' && c != ';' && c != '?' && c != '!') {
            return false; // Caractere inválido.
        }

        if (c == ' ' && caractereAnterior == ' ') {
            return false; // Espaços em branco em sequência.
        }

        if (ispunct(c) && ispunct(caractereAnterior) && c != ',' && c != ';') {
            return false; // Sinais de pontuação em sequência.
        }

        if (isupper(c, loc)) {
            if (!primeiroCaractereMaiusculo) {
                primeiroCaractereMaiusculo = true;
            } else {
                return false; // Mais de um caractere maiúsculo.
            }
        }

        if (caractereAnterior == '!' || caractereAnterior == '.') {
            if (islower(c, loc)) {
                return false; // Letra após sinal de pontuação não é maiúscula.
            }
        }

        caractereAnterior = c;
    }

    return primeiroCaractereMaiusculo;
}

// Implementação: 190015187
// revisão:
void Texto::setValor(string texto)
{

    if(!validar(texto))
        throw invalid_argument("Argumento invalido.");

    this->valor = texto;
}
