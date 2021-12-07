#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Usuario.h"
#include "Reserva.h"

using namespace std;

class Biblioteca
{
private:
   vector<Livro *> livros;
   vector<Usuario *> usuarios;
   vector<Periodico *> periodicos;
   vector<Monografia *> monografias;
   vector<Reserva *> reservas;
public:
   Biblioteca(/* args */);
   ~Biblioteca();
   //CRUD
   void AddLivro(Livro *livro);//poe livro(s) na biblioteca
   void AddUser(Usuario *usuario);
   void AddMonografia(Monografia *monografia);
   void AddPeriodico(Periodico *periodico);
   void ReadMonografia(Monografia *monografia);
   void ReadLivro(Livro *livro);//consulta um livro  
   void ReadUsuario(Usuario *usuario);//consulta um usuario
   void ShowAllMono();
   void ShowAllUsers();//mostra todos os usuarios da biblioteca
   void ShowAllBooks();//mostra todos os livros da biblioteca
   void UpdateLivro(Livro *livro, string nome , string autor, int num_paginas , string genero , string editora);
   void DeleteLivro(Livro *livro);
   void DeleteReserva(Reserva *reserva);
   void UpdateUser(Usuario *usuario, string cpf, string nome, string datanascimento);
   void DeleteUser(Usuario *usuario);
   void Reservar(vector<Item *> itens, Usuario *usuario);
   bool CheckReserva(Usuario *usuario, Item *item);
   Reserva* RetReserva(Usuario *usuario, Item* item);
   void Emprestar(vector<Item *> itens, Usuario *usuario,int d, int m, int a);//empresta livro(s). O(s) livro(s) emprestado(s) passa/passam para status de emprestado e o usuario passa a ter o(s) livro(s) em seu historico de livros adquiridos da biblioteca. 
   void Devolucao(vector<Item *> itens, Usuario *usuario, int d, int m, int a);//Status do(s) livro(s) deixa/ deixam de ser emprestado e o usuario deixa de ter aquele(s) livro(s) em seu historico
   bool Adimplencia(Usuario *usuario, int d, int m, int a);//ver se o usuario possui algum livro em que ja se passou o prazo para entregar. Se sim, nao podera pegar outro livro emprestado
   void relatorio_estatistico();
};
#endif


