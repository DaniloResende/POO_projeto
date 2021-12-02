#include <string>
#include "Item.h"
using namespace std;

class Periodico : public Item
{
   friend class Usuario;
private:
   string edicao;
   string local;
   string editora;
public:
   Periodico(/* args */);
   ~Periodico();
   void set_edicao(string edicao);
   void set_local(string local);
   void set_editora(string editora);
   string get_edicao();
   string get_local();
   string get_editora();
};


