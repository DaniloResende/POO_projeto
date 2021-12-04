
#include "Livro.h"
#include "Monografia.h"
#include "Periodico.h"



using namespace std;

class Usuario
{

   friend class Biblioteca;
private:
   string cpf;
   string nome;
   string datanascimento;
   vector<Item *> livrosemprestados;
   vector<Item *> monografiasemprestadas;
   vector<Item *> periodicosemprestados;
   vector<Item *> itenstotais;
public:
   Usuario(string p_cpf, string p_nome, string p_datanascimento);
   ~Usuario();
   void livrosemprestadosUsuario();//determina quais livros estao com o usuario
   void monografiasemprestadasUsuario();//determina quais monografias estao com o usuario
   void periodicosemprestadosUsuario();//determina quais periodicos estao com o usuario
   void add_livro_emprestado(Item *item);
   void remove_livro_emprestado(Item *item);
   void add_periodico_emprestado(Item *item);
   void remove_periodico_emprestado(Item *item);
   void add_monografia_emprestada(Item *item);
   void remove_monografia_emprestada(Item *item);
   string get_cpf();
   string get_nome();
   string get_datanascimento();
   void set_cpf(string p_cpf);
   void set_nome(string p_nome);
   void set_datanascimento(string p_datanascimento);
};