<<<<<<< HEAD
#include "Livro.h"

using namespace std;

class Usuario
{

   friend class Biblioteca;
private:
   string cpf;
   string nome;
   string datanascimento;
   vector<Livro *> livrosemprestados;
public:
   Usuario(string p_cpf, string p_nome, string p_datanascimento);
   ~Usuario();
   void livrosemprestadosUsuario();//determina quais livros estao com o usuario
   void add_livro_emprestado(Livro *livro);
   void remove_livro_emprestado(Livro *livro);
   string get_cpf();
   string get_nome();
   string get_datanascimento();
=======
#include "Livro.h"

using namespace std;

class Usuario
{

   friend class Biblioteca;
private:
   string cpf;
   string nome;
   string datanascimento;
   vector<Livro *> livrosemprestados;
public:
   Usuario(string p_cpf, string p_nome, string p_datanascimento);
   ~Usuario();
   void livrosemprestadosUsuario();//determina quais livros estao com o usuario
   void add_livro_emprestado(Livro *livro);
   void remove_livro_emprestado(Livro *livro);
   string get_cpf();
   string get_nome();
   string get_datanascimento();
>>>>>>> 96ebae31c8ffde6fe5386d3224ee71936dad6e5f
};