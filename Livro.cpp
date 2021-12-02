#include "Livro.h"

Livro::Livro(){}
 
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
