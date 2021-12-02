#include "Periodico.h"

Periodico::Periodico(){}

Periodico::~Periodico(){}

void Periodico::set_edicao(string p_edicao)
{
    edicao = p_edicao;
}
void Periodico::set_local(string p_local)
{
    local = p_local;
}
void Periodico::set_editora(string p_editora)
{
    editora = p_editora;
}
string Periodico::get_edicao()
{
    return edicao;
}

string Periodico::get_local()
{
    return local;
}

string Periodico::get_editora()
{
    return editora;
}
    

