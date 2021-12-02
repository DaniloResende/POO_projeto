#include "Emprestimo.h";

Emprestimo::Emprestimo(/* args */)
{
}

Emprestimo::~Emprestimo()
{
}

void Emprestimo::empresta(){
    b.set_emprestado(1);
    b.data_emprestado_inicio(); 
    b.data_emprestado_fim();       
}