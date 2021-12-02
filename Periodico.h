#include <string>
using namespace std

class Periodico
{
private:
   String edicao;
   String local;
   String editora;
public:
   Periodico(/* args */);
   ~Periodico();
   void set_edicao(string edicao);
   void set_local(string local);
   void set_editora(string editora);
   void set_emprestado(int emprestado);
   int data_piblicacao();

};


