#include <string>
#include "Biblioteca.h"

using namespace std;

class Emprestar
{
private:
    Usuario* user_emprestado;
    Item* item_emprestado;
public:
   Emprestar(Usuario *usuario,Item *item);
   ~Emprestar();
   void set_user(Usuario *user_emprestado);
   void set_item(Item *item_emprestado);
   string get_user();
   string get_item();
};