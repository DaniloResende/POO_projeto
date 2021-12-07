#include "Biblioteca.h"
#include <iostream>
<<<<<<< HEAD
=======
#include "Reserva.h"
>>>>>>> 875e68d51021369451b89d85011baf72c5ce25f6



int main(){
    Livro livro1, livro2;
    Monografia monografia1;
    monografia1.set_nome("TCC");
    monografia1.set_numero_paginas(29);
    livro1.set_nome("NELSON");
    livro1.set_autor("nelson");
    livro1.set_ano_lancamento(1990);
    livro1.set_editora("Nelson edits");
    livro1.set_genero("Genero Nelson");
    livro1.set_numero_paginas(1500);
    livro2.set_nome("NELSON2");
    livro2.set_autor("nelson2");
    livro2.set_ano_lancamento(1990);
    livro2.set_editora("Nelson edits");
    livro2.set_genero("Genero Nelson");
    livro2.set_numero_paginas(1501);
    Usuario usuario1("09009611558","Nelson","12/12/2002");
    Usuario usuario2("000000000","Nena", "11/09/2001");
    Biblioteca bib1;
    bib1.AddLivro(&livro1);
    bib1.AddLivro(&livro2);
    bib1.AddMonografia(&monografia1);
    bib1.AddUser(&usuario1);
    bib1.AddUser(&usuario2);
<<<<<<< HEAD
    bib1.Reservar({&monografia1},&usuario1);
    bib1.relatorio_estatistico();
    bib1.Emprestar({&livro1,&monografia1},&usuario1,30,01,2021);
    bib1.Emprestar({&livro2},&usuario1,30,1,2021);
    bib1.ShowAllBooks();
    bib1.ShowAllBooks();
    bib1.ShowAllMono();
    bib1.ShowAllBooks();
    bib1.Devolucao({&livro1,&livro2},&usuario1,30,3,2021);
    bib1.Emprestar({&livro1},&usuario2,20,4,2022);
    bib1.relatorio_estatistico();
=======
    bib1.Emprestar({&livro1,&livro2},&usuario1,30,01,2021);
    bib1.ShowAllUsers();
    bib1.Devolucao({&livro1},&usuario1,3,3,2021);
    bib1.ShowAllMono();
    Reserva reserva1(&usuario1,&monografia1);
    cout << reserva1.get_user() << endl;
    cout << reserva1.get_item() << endl;
>>>>>>> 875e68d51021369451b89d85011baf72c5ce25f6
    return 0;
}