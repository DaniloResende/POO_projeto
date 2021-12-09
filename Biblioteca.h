#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Usuario.h"
#include "Reserva.h"
#include "Emprestimo.h"

using namespace std;

class Biblioteca
{
private:
   vector<Livro *> livros;
   vector<Usuario *> usuarios;
   vector<Periodico *> periodicos;
   vector<Monografia *> monografias;
   vector<Reserva *> reservas;
   vector<Emprestimo *> emprestimos;
public:
   Biblioteca(/* args */);
   ~Biblioteca();
   //CRUD
   void AddItem(Livro *livro);//poe livro(s) na biblioteca
   void AddUser(Usuario *usuario);
   void AddItem(Monografia *monografia);
   void AddItem(Periodico *periodico);
   void ReadItem(Monografia *monografia);
   void ReadItem(Livro *livro);//consulta um livro
   void ReadItem(Periodico *periodico);
   void ReadUsuario(Usuario *usuario);//consulta um usuario
   void ShowAllMono();
   void ShowAllUsers();//mostra todos os usuarios da biblioteca
   void ShowAllBooks();//mostra todos os livros da biblioteca
   void ShowAllPerio();
   void UpdateItem(Livro *livro, string nome , string autor, int num_paginas , string genero , string editora);
   void UpdateItem(Monografia *monografia, string nome , string autor, int num_paginas , string curso, string orientador, string tema, string instituicao);
   void UpdateItem(Periodico *periodico, string nome , string autor, int num_paginas , string edicao , string local);
   void DeleteItem(Livro *livro);
   void DeleteItem(Monografia *monografia);
   void DeleteItem(Periodico *periodico);
   void DeleteReserva(Reserva *reserva);
   void DeleteEmprestimo(Emprestimo *emprestimo);
   void UpdateUser(Usuario *usuario, string cpf, string nome, string datanascimento);
   void DeleteUser(Usuario *usuario);
   void Reservar(vector<Item *> itens, Usuario *usuario);
   bool CheckReserva(Usuario *usuario, Item *item);
   Reserva* RetReserva(Usuario *usuario, Item *item);
   Emprestimo* RetEmprestimo(Usuario *usuario, Item *item);
   void Emprestar(vector<Item *> itens, Usuario *usuario,int d, int m, int a);//empresta livro(s). O(s) livro(s) emprestado(s) passa/passam para status de emprestado e o usuario passa a ter o(s) livro(s) em seu historico de livros adquiridos da biblioteca. 
   void Devolucao(vector<Item *> itens, Usuario *usuario, int d, int m, int a);//Status do(s) livro(s) deixa/ deixam de ser emprestado e o usuario deixa de ter aquele(s) livro(s) em seu historico
   bool Adimplencia(Usuario *usuario, int d, int m, int a);//ver se o usuario possui algum livro em que ja se passou o prazo para entregar. Se sim, nao podera pegar outro livro emprestado
   void relatorio_estatistico();
};
#endif


