
#include "Item.h"

Item::Item(){}
 
Item::~Item(){}

void Item::set_nome(string p_nome){
    nome = p_nome;
}

void Item::set_autor(string p_autor){
    autor = p_autor;
}

void Item::set_emprestado(int p_emprestado){
    emprestado = p_emprestado;
}

void Item::set_numero_paginas(int p_num_paginas){
    num_paginas = p_num_paginas;
}

void Item::set_ano_lancamento(int p_ano_lancamento){
    ano_lancamento = p_ano_lancamento;
}

void Item::data_emprestado_inicio(string p_dataEmprestadoInicio){
    dataEmprestadoInicio = p_dataEmprestadoInicio;
}

void Item::data_emprestado_fim(string p_dataEmprestadoInicio){
    dataEmprestadoFim = p_dataEmprestadoInicio;
}

string Item::get_nome(){
    return nome;
}

string Item::get_autor(){
    return autor;
}

int Item::get_emprestado(){
    return emprestado;
}

int Item::get_num_paginas(){
    return num_paginas;
}

int Item::get_ano_lancamento(){
    return ano_lancamento;
}

string Item::get_dataEmprestadoInicio(){
    return dataEmprestadoInicio;
}

string Item::get_dataEmprestadoFim(){
    return dataEmprestadoFim;
}