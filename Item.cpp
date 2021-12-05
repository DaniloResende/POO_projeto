
#include "Item.h"
#include <iostream>

Item::Item(){
    set_numero_paginas(0);
    set_emprestado(0);
    set_reservado(0);
    set_ano_lancamento(0000);
    set_nome("Não informado");
    set_autor("Não informado");
    }
 
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

void Item::set_reservado(int p_reservado){
    reservado = p_reservado;
}

void Item::set_numero_paginas(int p_num_paginas){
    num_paginas = p_num_paginas;
}

void Item::set_ano_lancamento(int p_ano_lancamento){
    ano_lancamento = p_ano_lancamento;
}

void Item::data_emprestado_inicio(Data *data_inicio, int dd, int mm, int aa){
    dataEmprestadoInicio = data_inicio;
    data_inicio->set_dia(dd);
    data_inicio->set_mes(mm);
    data_inicio->set_ano(aa);
}

void Item::data_emprestado_fim(Data *data_final, int dd, int mm, int aa){
    dataEmprestadoFim = data_final;
    data_final->set_dia(dd);
    data_final->set_mes(mm);
    data_final->set_ano(aa);
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

int Item::get_reservado(){
    return reservado;
}

int Item::get_num_paginas(){
    return num_paginas;
}

int Item::get_ano_lancamento(){
    return ano_lancamento;
}

string Item::get_dataEmprestadoInicio(){
    string data = to_string(dataEmprestadoInicio->get_dia()) + '/' + to_string(dataEmprestadoInicio->get_mes()) + '/' + to_string(dataEmprestadoInicio->get_ano());
    return data;
}

string Item::get_dataEmprestadoFim(){
    string data = to_string(dataEmprestadoFim->get_dia()) + '/' + to_string(dataEmprestadoFim->get_mes()) + '/' + to_string(dataEmprestadoFim->get_ano());
    return data;
}

char Item::get_type(){
    return type;
}

void Item::set_type(char t){
    type = t;
}

bool Item::operator == (const Item &item){
    if (nome == item.nome && autor == item.autor && num_paginas == item.num_paginas && ano_lancamento == item.ano_lancamento && emprestado==item.emprestado && type==item.type){
        return true;
    }
    else{
        return false;
    }
}