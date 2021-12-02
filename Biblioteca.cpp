#include "Biblioteca.h"
#include <iostream>


 
Biblioteca::Biblioteca(/* args */){}
 
Biblioteca::~Biblioteca(){}

                      
void Biblioteca::AddLivro(Livro *livro){
    livros.push_back(livro);
}

void Biblioteca::AddUser(Usuario *usuario){
    usuarios.push_back(usuario);
}

void Biblioteca::ReadLivro(Livro *livro){
    cout << "Nome: " << livro->get_nome() << endl;
    cout << "Autor: " << livro->get_autor()<< endl;
    if (livro->get_emprestado() == 1)
    {
        string resp = "Sim";
        cout << "Emprestado: " << resp << endl;
    }
    if (livro->get_emprestado() == 0)
    {
        string resp = "Não";
        cout << "Emprestado: " << resp << endl;
    }
    cout << "Genero: " << livro->get_genero()<< endl;
    cout << "Número de páginas: " << livro->get_num_paginas()<< endl;
    cout << "Ano de lançamento: " << livro->get_ano_lancamento()<< endl;
    cout << "Editora: " << livro->get_editora()<< endl;
    

}
void Biblioteca::ReadUsuario(Usuario *usuario){
    cout << "Nome: " << usuario->get_nome() << endl;
    cout << "CPF: " << usuario->get_cpf() << endl;
    cout << "Data de nascimento: " << usuario->get_datanascimento() << endl;
    cout << "Livros emprestados: ";
    usuario->livrosemprestadosUsuario();

}
void Biblioteca::ShowAllUsers(){
    for (size_t i = 0; i < usuarios.size(); ++i) {
        ReadUsuario(usuarios[i]);
        cout << "--------------------------------------------------------------" << endl;
    }

}
void Biblioteca::ShowAllBooks(){
        for (size_t i = 0; i < livros.size(); ++i) {
        ReadLivro(livros[i]);
        cout << "--------------------------------------------------------------" << endl;
    }

}

void Biblioteca::UpdateLivro(Livro livro){

}
void Biblioteca::DeleteLivro(Livro *livro){
    for (size_t i = 0; i < livros.size(); ++i) {
        if (livros[i]->get_nome() == livro->get_nome() ){
            livros.erase(livros.begin()+i);
        }
    }
}


void Biblioteca::UpdateUser(Usuario usuario){

}

void Biblioteca::DeleteUser(Usuario *usuario){
        for (size_t i = 0; i < usuarios.size(); ++i) {
        if (usuarios[i]->get_cpf() == usuario->get_cpf()){
            usuarios.erase(usuarios.begin()+i);
        }
    }

}
void Biblioteca::Emprestar(vector<Livro *> livros, Usuario *usuario, int d, int m, int a){
    for (size_t i = 0; i < livros.size(); ++i){
        Data* dataInicio = new Data;
        Data* dataFim = new Data;
        usuario->add_livro_emprestado(livros[i]);
        livros[i]->data_emprestado_inicio(dataInicio,d,m,a);
        int anof = a;
        int mesf = m;
        int diaf = d;
        if (m+1 > 12){
            anof= a+1;
        }
        if (m+1 == 2 && d >29){
            mesf = m+2;
            diaf = d-30;
        }
        livros[i]->data_emprestado_fim(dataFim,diaf,mesf,anof);
    }
    
}
void Biblioteca::Devolucao(vector<Livro *> livros, Usuario *usuario, string data){
    for (size_t i = 0; i < livros.size(); ++i){
    usuario->remove_livro_emprestado(livros[i]);
    }
}

void Biblioteca::Adimplencia(Usuario usuario){

}
void Biblioteca::relatorio_estatistico(){

}

