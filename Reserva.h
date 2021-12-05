#include <string>
#include "Usuario.h"

using namespace std;

class Reserva
{
private:
    Usuario* user_reserva;
    Item* item_reservado;
public:
   Reserva(/* args */);
   ~Reserva();
   void set_user(Usuario *p_user_reserva);
   void set_item(Item *p_item_reservado);
   string get_user();
   string get_item();
};