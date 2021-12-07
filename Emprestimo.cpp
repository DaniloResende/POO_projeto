#include "Emprestimo.h"
#include<string>
using namespace std;

Emprestimo::Emprestimo(Usuario *usuario,Item *item)
{
    set_user(usuario);
    set_item(item);
    item->set_emprestado(1);
}
Emprestimo::~Emprestimo(){};
void Emprestimo::set_user(Usuario *p_user_emprestado)
{
    user_emprestado = p_user_emprestado;
}
void Emprestimo::set_item(Item *p_item_emprestado)
{
    item_emprestado = p_item_emprestado;
}
string Emprestimo::get_user()
{
    return user_emprestado->get_cpf();
}
Item* Emprestimo::get_item()
{
    return item_emprestado;
}
