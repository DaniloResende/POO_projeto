#include "Reserva.h"
#include<string>
using namespace std;

Reserva::Reserva(Usuario *usuario,Item *item)
{
    set_user(usuario);
    set_item(item);
    item->set_reservado(1);
}
Reserva::~Reserva(){}
void Reserva::set_user(Usuario *p_user_reserva)
{
    user_reserva = p_user_reserva;
}
void Reserva::set_item(Item *p_item_reservado)
{
    item_reservado = p_item_reservado;
}
string Reserva::get_user()
{
    return user_reserva->get_nome();
}
string Reserva::get_item()
{
    return item_reservado->get_nome();
}
