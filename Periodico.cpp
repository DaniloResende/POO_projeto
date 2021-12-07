<<<<<<< HEAD
#include "Periodico.h"

Periodico::Periodico(){
    set_type('p');
};

Periodico::~Periodico(){};

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
    
=======
#include "Periodico.h"

Periodico::Periodico(){
    set_type('p');
};

Periodico::~Periodico(){};

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
    
>>>>>>> 875e68d51021369451b89d85011baf72c5ce25f6
