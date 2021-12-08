#include "Livro.h"

Livro::Livro(){
    set_type('l');
}

Livro::Livro(string p_nome, string p_autor, int p_ano, string p_editora, string p_genero, int p_num_pag){
    set_type('l');
    set_nome(p_nome);
    set_autor(p_autor);
    set_ano_lancamento(p_ano);
    set_editora(p_editora);
    set_genero(p_genero);
    set_numero_paginas(p_num_pag);
}
 
Livro::~Livro(){}

void Livro::set_editora(string p_editora){
    editora = p_editora;
}

void Livro::set_genero(string p_genero){
    genero = p_genero;
}

string Livro::get_genero(){
    return genero;
}

string Livro::get_editora(){
    return editora;
}

