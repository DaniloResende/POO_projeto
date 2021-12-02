#include <string>
#include <vector>
#include "Data.h"

using namespace std;

class Item 
{
    friend class Usuario;
private:
    string nome;
    string autor;
    int num_paginas;
    int ano_lancamento;
    Data *dataEmprestadoInicio;
    Data *dataEmprestadoFim;
    int emprestado; //1=emprestado; 0=não esta emprestado
public:
    Item(/* args */);
    ~Item();
    void set_nome(string p_nome);
    void set_autor(string p_autor);
    void set_emprestado(int p_emprestado);
    void set_numero_paginas(int p_num_paginas);
    void set_ano_lancamento(int p_ano_lancamento);
    void set_quantidade(int p_quantidade);
    void data_emprestado_inicio(Data *data_inicio, int dd, int mm, int aa); //data em que o livro foi emprestado
    void data_emprestado_fim(Data *data_final, int dd, int mm, int aa);       //data em que o livro foi devolvido
    string get_nome();
    string get_autor();
    int get_emprestado();
    int get_num_paginas();
    int get_ano_lancamento();
    string get_dataEmprestadoInicio();
    string get_dataEmprestadoFim();
};


