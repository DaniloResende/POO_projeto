#include "Periodico.h"

Periodico::Periodico(){
    set_type('p');
};

Periodico::Periodico(string p_nome, string p_autor, int p_num_paginas, int p_ano_lancamento,string p_edicao, string p_local, string p_editora){
    set_type('p');
    set_nome(p_nome);
    set_autor(p_autor);
    set_numero_paginas(p_num_paginas);
    set_ano_lancamento(p_ano_lancamento);
    set_edicao(p_edicao);
    set_local(p_local);
    set_editora(p_editora);
}

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
    
