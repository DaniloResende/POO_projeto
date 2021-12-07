<<<<<<< HEAD
#ifndef LIVRO_H
#define LIVRO_H
#include<string>
#include<vector>
#include "Item.h"

using namespace std;

class Livro : public Item
{
   friend class Usuario;
private:
   string genero;
   string editora;
public:
   Livro(/* args */);
   ~Livro();
   void set_editora(string p_editora);
   void set_genero(string p_genero);
   string get_genero();
   string get_editora();
};

=======
#ifndef LIVRO_H
#define LIVRO_H
#include<string>
#include<vector>
#include "Item.h"

using namespace std;

class Livro : public Item
{
   friend class Usuario;
private:
   string genero;
   string editora;
public:
   Livro(/* args */);
   ~Livro();
   void set_editora(string p_editora);
   void set_genero(string p_genero);
   string get_genero();
   string get_editora();
};

>>>>>>> 875e68d51021369451b89d85011baf72c5ce25f6
#endif