#ifndef RESERVA_H
#define RESERVA_H
#include <string>
#include "Usuario.h"
#include "Item.h"

using namespace std;

class Reserva
{
private:
    Usuario* user_reserva;
    Item* item_reservado;
public:
   Reserva(Usuario *usuario,Item *item);
   ~Reserva();
   void set_user(Usuario *p_user_reserva);
   void set_item(Item *p_item_reservado);
   string get_user();
   Item* get_item();
};
#endif