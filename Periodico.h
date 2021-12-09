#ifndef PERIODICO_H
#define PERIODICO_H

#include <string>
using namespace std;
#include "Item.h"


class Periodico : public Item{
   friend class Usuario;
private:
   string edicao;
   string local;
   string editora;
public:
   Periodico(/* args */);
   Periodico(string p_nome, string p_autor, int p_num_paginas, int p_ano_lancamento,string p_edicao, string p_local,string editora);
   ~Periodico();
   void set_edicao(string edicao);
   void set_local(string local);
   void set_editora(string editora);
   string get_edicao();
   string get_local();
   string get_editora();
};

#endif