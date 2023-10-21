#include "dominios.h"
#include <regex>
using namespace std;



// Implementação: 190015187
bool CodigoCartao::validar(string codigo)
{
    if(codigo.empty() || codigo.size() != 4)
        return false;

    // Usa de uma expressão regular para verificar o formato LLDD.
    regex pattern("^[A-Z]{2}[0-9]{2}$");

    return regex_match(codigo, pattern);
}


void CodigoCartao::setValor(string codigo)
{

    if(!validar(codigo))
        throw invalid_argument("Argumento invalido.");

    this->valor = codigo;
}
