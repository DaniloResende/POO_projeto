
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

void Usuario::periodicosemprestadosUsuario(){
    for (size_t i = 0; i < periodicosemprestados.size(); ++i) {
        cout << periodicosemprestados[i]->get_nome() << " ";
    }
    cout << endl;
}

void Usuario::monografiasemprestadasUsuario(){
    for (size_t i = 0; i < monografiasemprestadas.size(); ++i) {
        cout << monografiasemprestadas[i]->get_nome() << " ";
    }
    cout << endl;
}



void Usuario::add_livro_emprestado(Item *item){
    livrosemprestados.push_back(item);
    itenstotais.push_back(item);
    item->set_emprestado(1);
}

void Usuario::remove_livro_emprestado(Item *item){
    for (size_t i = 0; i < livrosemprestados.size(); ++i){
        if (livrosemprestados[i]==item){
            livrosemprestados.erase(livrosemprestados.begin()+i);
            item->set_emprestado(0);
        }
    }
    for (size_t i = 0; i < itenstotais.size(); ++i){
        if (itenstotais[i]==item){
            itenstotais.erase(itenstotais.begin()+i);
        }
    }
}

void Usuario::add_periodico_emprestado(Item *item){
    periodicosemprestados.push_back(item);
    itenstotais.push_back(item);
    item->set_emprestado(1);
}

void Usuario::remove_periodico_emprestado(Item *item){
    for (size_t i = 0; i < periodicosemprestados.size(); ++i){
        if (periodicosemprestados[i]==item){
            periodicosemprestados.erase(periodicosemprestados.begin()+i);
            item->set_emprestado(0);
        }
    }
    for (size_t i = 0; i < itenstotais.size(); ++i){
        if (itenstotais[i]==item){
            itenstotais.erase(itenstotais.begin()+i);
        }
    }

}

void Usuario::add_monografia_emprestada(Item *item){
    monografiasemprestadas.push_back(item);
    itenstotais.push_back(item);
    item->set_emprestado(1);
}

void Usuario::remove_monografia_emprestada(Item *item){
    for (size_t i = 0; i < monografiasemprestadas.size(); ++i){
        if (monografiasemprestadas[i]==item){
            monografiasemprestadas.erase(monografiasemprestadas.begin()+i);
            item->set_emprestado(0);
        }
    }
    for (size_t i = 0; i < itenstotais.size(); ++i){
        if (itenstotais[i]==item){
            itenstotais.erase(itenstotais.begin()+i);
        }
    }
}