#include "Biblioteca.h"
#include <iostream>


 
Biblioteca::Biblioteca(/* args */){}
 
Biblioteca::~Biblioteca(){}

                      
void Biblioteca::AddLivro(Livro *livro){
    livros.push_back(livro);
}

void Biblioteca::AddMonografia(Monografia *monografia){
    monografias.push_back(monografia);
}

void Biblioteca:: AddPeriodico(Periodico *periodico){
    periodicos.push_back(periodico);
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
    cout << "Editora: " << livro->get_editora()<< endl;
    cout << "Número de páginas: " << livro->get_num_paginas()<< endl;
    cout << "Ano de lançamento: " << livro->get_ano_lancamento()<< endl;
    

}

void Biblioteca::ReadMonografia(Monografia *monografia){
    cout << "Nome: " << monografia->get_nome() << endl;
    cout << "Autor: " << monografia->get_autor()<< endl;
    if (monografia->get_emprestado() == 1)
    {
        string resp = "Sim";
        cout << "Emprestada: " << resp << endl;
    }
    if (monografia->get_emprestado() == 0)
    {
        string resp = "Não";
        cout << "Emprestada: " << resp << endl;
    }
    cout << "Orientador: " << monografia->get_orientador() << endl;
    cout << "Curso: " << monografia->get_curso() << endl;
    cout << "Instituição: " << monografia->get_instituicao() << endl;
    cout << "Tema: " << monografia->get_tema() << endl;
    cout << "Número de páginas: " << monografia->get_num_paginas()<< endl;
    cout << "Ano de lançamento: " << monografia->get_ano_lancamento()<< endl;
    

}




void Biblioteca::ReadUsuario(Usuario *usuario){
    cout << "Nome: " << usuario->get_nome() << endl;
    cout << "CPF: " << usuario->get_cpf() << endl;
    cout << "Data de nascimento: " << usuario->get_datanascimento() << endl;
    cout << "Livros emprestados: ";
    usuario->livrosemprestadosUsuario();
    cout << "Monografias emprestadas: ";
    usuario->monografiasemprestadasUsuario();
    cout << "Periódicos emprestados: ";
    usuario->periodicosemprestadosUsuario();

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

void Biblioteca::ShowAllMono(){
    for (size_t i = 0; i < monografias.size(); ++i){
        ReadMonografia(monografias[i]);
        cout << "--------------------------------------------------------------" << endl;
        
    }

}


void Biblioteca::UpdateLivro(Livro *livro, string nome , string autor, int num_paginas , string genero , string editora){
    livro->set_nome(nome);
    livro->set_autor(autor);
    livro->set_numero_paginas(num_paginas);
    livro->set_genero(genero);
    livro->set_editora(editora);

}
void Biblioteca::DeleteLivro(Livro *livro){
    for (size_t i = 0; i < livros.size(); ++i) {
        if (livros[i] == livro){
            livros.erase(livros.begin()+i);
        }
    }
}


void Biblioteca::UpdateUser(Usuario *usuario, string cpf, string nome, string datanascimento){
    usuario->set_nome(nome);
    usuario->set_cpf(cpf);
    usuario->set_datanascimento(datanascimento);

}

void Biblioteca::DeleteUser(Usuario *usuario){
        for (size_t i = 0; i < usuarios.size(); ++i) {
        if (usuarios[i]->get_cpf() == usuario->get_cpf()){
            usuarios.erase(usuarios.begin()+i);
        }
    }

}
void Biblioteca::Emprestar(vector<Item *> itens, Usuario *usuario, int d, int m, int a){
    if (Adimplencia(usuario, d, m, a)){
        cout << "Você tem itens pedentes com atraso, portanto não é possível fazer outro empréstimo" << endl;
    }
    else{
        for (size_t i = 0; i < itens.size(); ++i){
        Data* dataInicio = new Data;
        Data* dataFim = new Data;
        if (itens[i]->get_type() == 'l'){
            usuario->add_livro_emprestado(itens[i]);
        }
        else if (itens[i]->get_type() == 'P'){
            usuario->add_periodico_emprestado(itens[i]);
        }
        else if (itens[i]->get_type() == 'm'){
            usuario->add_monografia_emprestada(itens[i]);
        }
        itens[i]->data_emprestado_inicio(dataInicio,d,m,a);
        int anof = a;
        int mesf = m;
        int diaf = d;
        if (m+1 > 12){
            anof= a+1;
            mesf = 1;
        }
        if (m+1 == 2 && d >28){
            mesf = m+2;
            diaf = 31-d;
        }
        else{
            mesf = m+1;
        }
        itens[i]->data_emprestado_fim(dataFim,diaf,mesf,anof);

    }
    cout << "Item(ns) emprestados com sucesso" << endl;
    cout << "--------------------------------------------------------------" << endl;
    
    }
    
}
void Biblioteca::Devolucao(vector<Item *> itens, Usuario *usuario, int d, int m , int a){
    for (size_t i = 0; i < livros.size(); ++i){
    Data* dataInicio = new Data;
    Data* dataFim = new Data;
    if (itens[i]->get_type() == 'l'){
            usuario->remove_livro_emprestado(itens[i]);
        }
    else if (itens[i]->get_type() == 'p'){
            usuario->remove_periodico_emprestado(itens[i]);
        }
    else if (itens[i]->get_type() == 'm'){
            usuario->remove_monografia_emprestada(itens[i]);
        }
    itens[i]->data_emprestado_inicio(dataInicio,0,0,0);
    itens[i]->data_emprestado_fim(dataFim,0,0,0);
    }
    cout << "Item(ns) devolvidos com sucesso" << endl;
    cout << "--------------------------------------------------------------" << endl;
}

bool Biblioteca::Adimplencia(Usuario *usuario, int d, int m, int a){
    for (size_t i = 0; i < usuario->itenstotais.size(); ++i){
        if (a > (usuario->itenstotais[i]->dataEmprestadoFim->get_ano())){
            return true;
        }
        else if (m > (usuario->itenstotais[i]->dataEmprestadoFim->get_mes())){
            return true;
        }
        else if (d > (usuario->itenstotais[i]->dataEmprestadoFim->get_dia())){
            return true;
        }
        else{
            return false;
        }

}
}
void Biblioteca::relatorio_estatistico(){

}

