
#include "Livro.h"

 
Livro::Livro(/* args */){}
 
Livro::~Livro(){}

void Livro::set_editora(string p_editora){
    editora = p_editora;
}

void Livro::set_genero(string p_genero){
    genero = p_genero;
}

void Livro::set_nome(string p_nome){
    nome = p_nome;
}

void Livro::set_autor(string p_autor){
    autor = p_autor;
}

void Livro::set_emprestado(int p_emprestado){
    emprestado = p_emprestado;
}

void Livro::set_numero_paginas(int p_num_paginas){
    num_paginas = p_num_paginas;
}

void Livro::set_ano_lancamento(int p_ano_lancamento){
    ano_lancamento = p_ano_lancamento;
}

void Livro::data_emprestado_inicio(string p_dataEmprestadoInicio){
    dataEmprestadoInicio = p_dataEmprestadoInicio;
}

void Livro::data_emprestado_fim(string p_dataEmprestadoInicio){
    dataEmprestadoFim = p_dataEmprestadoInicio;
}

string Livro::get_nome(){
    return nome;
}

string Livro::get_autor(){
    return autor;
}

int Livro::get_emprestado(){
    return emprestado;
}

string Livro::get_genero(){
    return genero;
}

string Livro::get_editora(){
    return editora;
}

int Livro::get_num_paginas(){
    return num_paginas;
}

int Livro::get_ano_lancamento(){
    return ano_lancamento;
}

string Livro::get_dataEmprestadoInicio(){
    return dataEmprestadoInicio;
}

string Livro::get_dataEmprestadoFim(){
    return dataEmprestadoFim;
}