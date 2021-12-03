
#include "Usuario.h"
#include <iostream>



Usuario::Usuario(string p_cpf, string p_nome, string p_datanascimento){
    cpf = p_cpf;
    nome = p_nome;
    datanascimento = p_datanascimento;
}

Usuario::~Usuario(){}

string Usuario::get_nome(){
    return nome;
}

string Usuario::get_cpf(){
    return cpf;
}

string Usuario::get_datanascimento(){
    return datanascimento;
}

void Usuario::set_nome(string p_nome){
    nome = p_nome;
}

void Usuario::set_cpf(string p_cpf){
    cpf = p_cpf;
}

void Usuario::set_datanascimento(string p_datanascimento){
    datanascimento = p_datanascimento;
}

void Usuario::livrosemprestadosUsuario(){
    for (size_t i = 0; i < livrosemprestados.size(); ++i) {
        cout << livrosemprestados[i]->get_nome() << " ";
    }
    cout << endl;
}


void Usuario::add_livro_emprestado(Livro *livro){
    livrosemprestados.push_back(livro);
    livro->set_emprestado(1);
}

void Usuario::remove_livro_emprestado(Livro *livro){
    for (size_t i = 0; i < livrosemprestados.size(); ++i){
        if (livrosemprestados[i]->get_nome() == livro->get_nome() && livrosemprestados[i]->get_autor() == livro->get_autor()){
            livrosemprestados.erase(livrosemprestados.begin()+i);
            livro->set_emprestado(0);
        }
    }
}
