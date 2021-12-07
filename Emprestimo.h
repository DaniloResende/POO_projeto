#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H
#include <string>
#include "Usuario.h"
#include "Item.h"

using namespace std;

class Emprestimo
{
private:
    Usuario* user_emprestado;
    Item* item_emprestado;
public:
   Emprestimo(Usuario *usuario,Item *item);
   ~Emprestimo();
   void set_user(Usuario *user_emprestado);
   void set_item(Item *item_emprestado);
   string get_user();
   Item* get_item();
};
#endif