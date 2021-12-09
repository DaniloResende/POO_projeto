#include "Biblioteca.h"
#include <iostream>



 
Biblioteca::Biblioteca(/* args */){}
 
Biblioteca::~Biblioteca(){}

                      
void Biblioteca::AddItem(Livro *livro){
    livros.push_back(livro);
}

void Biblioteca::AddItem(Monografia *monografia){
    monografias.push_back(monografia);
}

void Biblioteca:: AddItem(Periodico *periodico){
    periodicos.push_back(periodico);
}

void Biblioteca::AddUser(Usuario *usuario){
    usuarios.push_back(usuario);
}

void Biblioteca::ReadItem(Livro *livro){
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
    if (livro->get_reservado() == 1)
    {
        string resp2 = "Sim";
        cout << "Reservado: " << resp2 << endl;
    }
    if (livro->get_reservado() == 0)
    {
        string resp2 = "Não";
        cout << "Reservado: " << resp2 << endl;
    }
    cout << "Genero: " << livro->get_genero()<< endl;
    cout << "Editora: " << livro->get_editora()<< endl;
    cout << "Número de páginas: " << livro->get_num_paginas()<< endl;
    cout << "Ano de lançamento: " << livro->get_ano_lancamento()<< endl;
    

}

void Biblioteca::ReadItem(Monografia *monografia){
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
    if (monografia->get_reservado() == 1)
    {
        string resp2 = "Sim";
        cout << "Reservada: " << resp2 << endl;
    }
    if (monografia->get_reservado() == 0)
    {
        string resp2 = "Não";
        cout << "Reservada: " << resp2 << endl;
    }
    cout << "Orientador: " << monografia->get_orientador() << endl;
    cout << "Curso: " << monografia->get_curso() << endl;
    cout << "Instituição: " << monografia->get_instituicao() << endl;
    cout << "Tema: " << monografia->get_tema() << endl;
    cout << "Número de páginas: " << monografia->get_num_paginas()<< endl;
    cout << "Ano de lançamento: " << monografia->get_ano_lancamento()<< endl;
    

}

void Biblioteca::ReadItem(Periodico *periodico){
    cout << "Nome: " << periodico->get_nome() << endl;
    cout << "Autor: " << periodico->get_autor()<< endl;
    if (periodico->get_emprestado() == 1)
    {
        string resp = "Sim";
        cout << "Emprestado: " << resp << endl;
    }
    if (periodico->get_emprestado() == 0)
    {
        string resp = "Não";
        cout << "Emprestado: " << resp << endl;
    }
    if (periodico->get_reservado() == 1)
    {
        string resp2 = "Sim";
        cout << "Reservado: " << resp2 << endl;
    }
    if (periodico->get_reservado() == 0)
    {
        string resp2 = "Não";
        cout << "Reservado: " << resp2 << endl;
    }
    cout << "Edição: " << periodico->get_edicao() << endl;
    cout << "Editora: " << periodico->get_editora() << endl;
    cout << "Local: " << periodico->get_local() << endl;
    cout << "Número de páginas: " << periodico->get_num_paginas()<< endl;
    cout << "Ano de lançamento: " << periodico->get_ano_lancamento()<< endl;
    

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
        ReadItem(livros[i]);
        cout << "--------------------------------------------------------------" << endl;
    }

}

void Biblioteca::ShowAllMono(){
    for (size_t i = 0; i < monografias.size(); ++i){
        ReadItem(monografias[i]);
        cout << "--------------------------------------------------------------" << endl;
        
    }

}

void Biblioteca::ShowAllPerio(){
    for (size_t i = 0; i < periodicos.size(); ++i){
        ReadItem(periodicos[i]);
        cout << "--------------------------------------------------------------" << endl;
        
    }

}


void Biblioteca::UpdateItem(Livro *livro, string nome , string autor, int num_paginas , string genero , string editora){
    livro->set_nome(nome);
    livro->set_autor(autor);
    livro->set_numero_paginas(num_paginas);
    livro->set_genero(genero);
    livro->set_editora(editora);

}

void Biblioteca::UpdateItem(Monografia *monografia, string nome , string autor, int num_paginas , string curso, string orientador, string tema, string instituicao ){
    monografia->set_nome(nome);
    monografia->set_autor(autor);
    monografia->set_numero_paginas(num_paginas);
    monografia->set_curso(curso);
    monografia->set_orientador(orientador);
    monografia->set_tema(tema);
    monografia->set_instituicao(instituicao);

}

void Biblioteca::UpdateItem(Periodico *periodico, string nome , string autor, int num_paginas , string edicao , string local){
    periodico->set_nome(nome);
    periodico->set_autor(autor);
    periodico->set_numero_paginas(num_paginas);
    periodico->set_edicao(edicao);
    periodico->set_local(local);

}
void Biblioteca::DeleteItem(Livro *livro){
    for (size_t i = 0; i < livros.size(); ++i) {
        if (livros[i] == livro){
            livros.erase(livros.begin()+i);
        }
    }
}

void Biblioteca::DeleteItem(Monografia *monografia){
    for (size_t i = 0; i < monografias.size(); ++i) {
        if (monografias[i] == monografia){
            monografias.erase(monografias.begin()+i);
        }
    }
}

void Biblioteca::DeleteItem(Periodico *periodico){
    for (size_t i = 0; i < periodicos.size(); ++i) {
        if (periodicos[i] == periodico){
            periodicos.erase(periodicos.begin()+i);
        }
    }
}

void Biblioteca::DeleteReserva(Reserva *reserva){
    for (size_t i = 0; i < reservas.size(); ++i) {
        if (reservas[i] == reserva){
            reservas.erase(reservas.begin()+i);
        }
    }
}

void Biblioteca::DeleteEmprestimo(Emprestimo *emprestimo){
    for (size_t i = 0; i < emprestimos.size(); ++i) {
        if (emprestimos[i] == emprestimo){
            emprestimos.erase(emprestimos.begin()+i);
        }
    }
}

Emprestimo* Biblioteca::RetEmprestimo(Usuario *usuario, Item *item){
    for (size_t i = 0; i< emprestimos.size(); ++i){
        if (usuario->get_cpf() == emprestimos[i]->get_user() && item == emprestimos[i]->get_item()){
            return emprestimos[i];
        }
    }
    return 0;
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

void Biblioteca::Reservar(vector<Item *> itens, Usuario *usuario){
    for (size_t i = 0; i< itens.size(); ++i){
        Reserva* reserva1 = new Reserva(usuario,itens[i]);
        reservas.push_back(reserva1);
    }
}

bool Biblioteca::CheckReserva(Usuario *usuario, Item *item){
    for (size_t i = 0; i< reservas.size(); ++i){
        if (usuario->get_cpf() == reservas[i]->get_user() && item == reservas[i]->get_item()){
            return true;
        }
        else{
            continue;
        }
}
    return false;
}

Reserva* Biblioteca::RetReserva(Usuario *usuario, Item *item){
    for (size_t i = 0; i< reservas.size(); ++i){
        if (usuario->get_cpf() == reservas[i]->get_user() && item == reservas[i]->get_item()){
            return reservas[i];
        }
    }
    return 0;
}

void Biblioteca::Emprestar(vector<Item *> itens, Usuario *usuario, int d, int m, int a){
    if (Adimplencia(usuario, d, m, a)){
        cout << "Você tem itens pedentes com atraso, portanto não é possível fazer outro empréstimo" << endl;
    }
    else{
        for (size_t i = 0; i < itens.size(); ++i){
        Data* dataInicio = new Data;
        Data* dataFim = new Data;
        if (itens[i]->get_reservado() == 1 && CheckReserva(usuario,itens[i])==0){
            cout << "O item de nome " << itens[i]->get_nome()<< " se encontra reservado, portanto não é  possível realizar o empréstimo" << endl;
        }
        else if (itens[i]->get_emprestado()==1){
            cout << "O item de nome '" << itens[i]->get_nome() << "' já está emprestado, portanto não é possível realizar o empréstimo" << endl;
        }
        else{
        Emprestimo* emprestimo1 = new Emprestimo(usuario,itens[i]);
        emprestimos.push_back(emprestimo1);
        if (itens[i]->get_type() == 'l'){
            usuario->add_livro_emprestado(itens[i]);
        }
        else if (itens[i]->get_type() == 'P'){
            usuario->add_periodico_emprestado(itens[i]);
        }
        else if (itens[i]->get_type() == 'm'){
            usuario->add_monografia_emprestada(itens[i]);
        }
        if (itens[i]->get_reservado() == 1 && CheckReserva(usuario,itens[i])==1){
            itens[i]->set_reservado(0);
            DeleteReserva(RetReserva(usuario,itens[i]));
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
    cout << "Item emprestado com sucesso" << endl;
    cout << "Data de entrega: " << itens[i]->get_dataEmprestadoFim() << endl;
    cout << "--------------------------------------------------------------" << endl;
        }
    }
    }
}   
void Biblioteca::Devolucao(vector<Item *> itens, Usuario *usuario, int d, int m , int a){
    for (size_t i = 0; i < itens.size(); ++i){
    DeleteEmprestimo(RetEmprestimo(usuario,itens[i]));
    Data* dataInicio = new Data;
    Data* dataFim = new Data;
    itens[i]->data_emprestado_inicio(dataInicio,0,0,0);
    itens[i]->data_emprestado_fim(dataFim,0,0,0);
    if (itens[i]->get_type() == 'l'){
        usuario->remove_livro_emprestado(itens[i]);
        }
    if (itens[i]->get_type() == 'p'){
        usuario->remove_periodico_emprestado(itens[i]);
        }
    if (itens[i]->get_type() == 'm'){
        usuario->remove_monografia_emprestada(itens[i]);
        }
    if (Adimplencia(usuario,d,m,a)){
        cout << "Item devolvido com atraso" << endl;
        cout << "--------------------------------------------------------------" << endl;
    }
    else{
         cout << "Item devolvido com sucesso" << endl;
         cout << "--------------------------------------------------------------" << endl;
    }
    }
}


bool Biblioteca::Adimplencia(Usuario *usuario, int d, int m, int a){
    for (size_t i = 0; i < usuario->itenstotais.size(); ++i){
        if (a > usuario->itenstotais[i]->dataEmprestadoFim->get_ano()){
            return true;
        } 
        else if (m > usuario->itenstotais[i]->dataEmprestadoFim->get_mes()){
            return true;
        }
        else if (m==usuario->itenstotais[i]->dataEmprestadoFim->get_mes()){
            if (d > usuario->itenstotais[i]->dataEmprestadoFim->get_dia()){
                return true;
            }
            }
        }
        return false;
}
void Biblioteca::relatorio_estatistico(){
    int total_reservas = 0;
    int total_emprestimos = 0;
    int total_livros = 0;
    int total_periodicos = 0;
    int total_monografias = 0;
    int total_usuarios = 0;
    for (size_t i = 0; i < reservas.size(); ++i){
        total_reservas+=1;
    }
    for (size_t i = 0; i < emprestimos.size(); ++i){
        total_emprestimos+=1;
    }
    for (size_t i = 0; i < livros.size(); ++i){
        total_livros+=1;
    }
    for (size_t i = 0; i < periodicos.size(); ++i){
        total_periodicos+=1;
    }
    for (size_t i = 0; i < monografias.size(); ++i){
        total_monografias+=1;
    }
    for (size_t i = 0; i < usuarios.size(); ++i){
        total_usuarios+=1;
    }
    cout << "Reservas totais: " << total_reservas << endl;
    cout << "Emprestimos totais: " << total_emprestimos << endl;
    cout << "Livros cadastrados: " << total_livros << endl;
    cout << "Periodicos cadastrados: " << total_periodicos << endl;
    cout << "Monografias cadastradas: " << total_monografias << endl;
    cout << "Usuarios cadastrados: " << total_usuarios << endl;
}

