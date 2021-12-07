#include "Emprestar.h"
#include<string>
using namespace std;

Emprestar::Emprestar(Usuario *usuario,Item *item)
{
    set_user(usuario);
    set_item(item);
    item->set_emprestado(1);
}
Emprestar::~Emprestar(){};
void Emprestar::set_user(Usuario *p_user_emprestado)
{
    user_emprestado = p_user_emprestado;
}
void Emprestar::set_item(Item *p_item_emprestado)
{
    item_emprestado = p_item_emprestado;
}
string Emprestar::get_user()
{
    return user_emprestado->get_nome();
}
string Emprestar::get_item()
{
    return item_emprestado->get_nome();
}
