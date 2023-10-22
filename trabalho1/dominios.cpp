#include "dominios.h"
#include <regex>
#include <cctype>
#include <set>
#include <locale>

using namespace std;



// Implementa��o: 190015187
// revis�o:
bool Codigo::validar(string codigo)
{
    if(codigo.empty() || codigo.size() != 4)
        return false;

    // Usa de uma express�o regular para verificar o formato LLDD.
    regex pattern("^[A-Z]{2}[0-9]{2}$");

    return regex_match(codigo, pattern);
}

// Implementa��o: 190015187
// revis�o:
void Codigo::setValor(string codigo)
{

    if(!validar(codigo))
        throw invalid_argument("Argumento invalido.");

    this->valor = codigo;
}


// ---- COLUNA ------
// Implementa��o: 190015187
// revis�o:
bool Coluna::validar(string coluna)
{
    if(coluna.empty() ||  (coluna != "SOLICITADO" && coluna != "EM EXECUCAO" && coluna != "CONCLUIDO") )
        return false;

    return true;

}

// Implementa��o: 190015187
// revis�o:
void Coluna::setValor(string coluna)
{
    if(!validar(coluna))
        throw invalid_argument("Argumento invalido.");

    this->valor = coluna;
}


// ----- EMAIl -------
// Implementa��o: 190015187
// revis�o:
bool Email::validar(string email)
{

    if(email.empty())
        return false;

    // Expressao regular para verificar o formato do email.
    regex pattern("^(?!.*\\.{2})[A-Za-z0-9.]{2,10}@(?!\\.)[A-Za-z0-9.]{2,20}$");

    // Verifica se a string corresponde ao padrao.
    return regex_match(email, pattern);

}

// Implementa��o: 190015187
// revis�o:
void Email::setValor(string email)
{
    if(!validar(email))
        throw invalid_argument("Argumento invalido.");
    this->valor = email;
}

//-------- Limite -----------

// Implementa��o: 190015187
// revis�o:
bool Limite::validar(int limite)
{
    if((limite % 5 != 0) || (limite > 20) || (limite < 5) )
        return false;

    return true;
}

// Implementa��o: 190015187
// revis�o:
void Limite::setValor(int limite)
{

    if(!validar(limite))
        throw invalid_argument("Argumento invalido.");

    this->valor = limite;
}

// ---------- Senha ----------
// Implementa��o: 190015187
// revis�o:

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

// Implementa��o: 190015187
// revis�o:
void Senha::setValor(string senha)
{
    if(!validar(senha))
        throw invalid_argument("Argumento invalido.");
    this->valor = senha;
}

// --------- Texto ---------------

// Implementa��o: 190015187
// revis�o:

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
    bool primeiroCaractereMaiusculo = false; // Rastreia se o primeiro caractere � mai�sculo.

    // Configura a localiza��o C para n�o considerar acentua��o.


    locale loc("C");

    for (char c : texto) {
        if (!isalnum(c, loc) && c != ' ' && c != ',' && c != '.' && c != ';' && c != '?' && c != '!') {
            return false; // Caractere inv�lido.
        }

        if (c == ' ' && caractereAnterior == ' ') {
            return false; // Espa�os em branco em sequ�ncia.
        }

        if (ispunct(c) && ispunct(caractereAnterior) && c != ',' && c != ';') {
            return false; // Sinais de pontua��o em sequ�ncia.
        }

        if (isupper(c, loc)) {
            if (!primeiroCaractereMaiusculo) {
                primeiroCaractereMaiusculo = true;
            } else {
                return false; // Mais de um caractere mai�sculo.
            }
        }

        if (caractereAnterior == '!' || caractereAnterior == '.') {
            if (islower(c, loc)) {
                return false; // Letra ap�s sinal de pontua��o n�o � mai�scula.
            }
        }

        caractereAnterior = c;
    }

    return primeiroCaractereMaiusculo;
}

// Implementa��o: 190015187
// revis�o:
void Texto::setValor(string texto)
{

    if(!validar(texto))
        throw invalid_argument("Argumento invalido.");

    this->valor = texto;
}
