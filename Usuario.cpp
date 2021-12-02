
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

