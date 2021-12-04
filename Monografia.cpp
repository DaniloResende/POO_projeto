#include "Monografia.h"
#include <string>

using namespace std;

Monografia::Monografia(/* args */){
    set_type('m');
}

Monografia::~Monografia(){}

void Monografia::set_orientador(string p_orientador)
{
    orientador = p_orientador;
}
void Monografia::set_curso(string p_curso)
{
    curso = p_curso;
}

void Monografia::set_instituicao(string p_instituicao)
{
    instituicao = p_instituicao;
}
void Monografia::set_tema(string p_tema)
{
    tema = p_tema;
}
string Monografia::get_orientador(string p_orientador)
{
    return orientador;
}
string Monografia::get_curso(string p_curso)
{
    return curso;
}
string Monografia::get_instituicao(string p_instituicao)
{
    return instituicao;
}
string Monografia::get_tema(string p_tema)
{
    return tema;
}
