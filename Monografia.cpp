#include "Monografia.h"
#include <string>

using namespace std;

Monografia::Monografia(/* args */){
    set_type('m');
    set_orientador("Não informado");
    set_instituicao("Não informado");
    set_curso("Não informado");
    set_tema("Não informado");
}

Monografia::Monografia(string p_nome, string p_autor, int p_num_paginas, int p_ano_lancamento, string p_orientador, string p_curso, string p_instituicao, string p_tema){
    set_nome(p_nome);
    set_autor(p_autor);
    set_numero_paginas(p_num_paginas);
    set_ano_lancamento(p_ano_lancamento);
    set_orientador(p_orientador);
    set_curso(p_curso);
    set_instituicao(p_instituicao);
    set_tema(p_tema);

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
string Monografia::get_orientador()
{
    return orientador;
}
string Monografia::get_curso()
{
    return curso;
}
string Monografia::get_instituicao()
{
    return instituicao;
}
string Monografia::get_tema()
{
    return tema;
}
