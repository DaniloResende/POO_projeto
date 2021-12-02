
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

void Item::data_emprestado_inicio(Data *data_inicio, int dd, int mm, int aa){
    data_inicio.set_dia(dd);
    data_inicio.set_mes(mm);
    data_inicio.set_ano(aa);
}

void Item::data_emprestado_fim(Data *data_final, int dd, int mm, int aa){
    data_final.set_dia(dd);
    data_final.set_mes(mm);
    data_final.set_ano(aa);
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

}

string Item::get_dataEmprestadoFim(){

}