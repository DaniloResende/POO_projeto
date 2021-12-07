<<<<<<< HEAD
#include "Livro.h"

Livro::Livro(){
    set_type('l');
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

=======
#include "Livro.h"

Livro::Livro(){
    set_type('l');
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

>>>>>>> 875e68d51021369451b89d85011baf72c5ce25f6
