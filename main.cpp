#include "Biblioteca.h"
#include <iostream>



int main(){
    Livro livro1("O pequeno principe","Antoine de Saint-Exupéry",2015,"Geração Editorial","Conto",160);
    Livro livro2("2001: Uma Odisseia no Espaço","Arthur C. Clarke",2015,"Editora Aleph","Ficção Cientifica",326);
    Livro livro3("Harry Potter e a pedra filosofal","J.K. Rowling",2017,"Rocco","Fantasia",208);
    Livro livro4("Harry Potter e o prisioneiro de Askaban","J.K. Rowling",2017,"Rocco","Fantasia",288);
    Livro livro5("O Hobbit","J.R.R. Tolkien",2019,"HarperCollins","Fantasia",336);
    Livro livro6("Duna: livro 1","Frank Herbert",2017,"Editora Aleph","Ficção Científica",680);
    Livro livro7("A revolução dos bichos","George Orwell",2007,"Companhia das Letras","Ficção",152);
    Livro livro8("Admirável mundo novo","Aldous Leonard Huxley",2014,"Biblioteca Azul","Ficção Científica",312);
    Livro livro9("Fahrenheit 451","Ray Bradbury",2012,"Biblioteca Azul","Ficção distópica",216);
    Livro livro10("Tempo do Desprezo - The Witcher: Volume 4","Andrzej Sapkowski",2015,"WMF Martins Fontes","Fantasia",352);
    Monografia monografia1;
    monografia1.set_nome("TCC");
    monografia1.set_numero_paginas(29);
    Usuario usuario1("09009611558","Nelson","12/12/2002");
    Usuario usuario2("000000000","Nena", "11/09/2001");
    Biblioteca bib1;
    bib1.AddLivro(&livro1);
    bib1.AddLivro(&livro2);
    bib1.AddLivro(&livro3);
    bib1.AddLivro(&livro4);
    bib1.AddLivro(&livro5);
    bib1.AddLivro(&livro6);
    bib1.AddLivro(&livro7);
    bib1.AddLivro(&livro8);
    bib1.AddLivro(&livro9);
    bib1.AddLivro(&livro10);
    bib1.AddMonografia(&monografia1);
    bib1.AddUser(&usuario1);
    bib1.AddUser(&usuario2);
    bib1.Reservar({&monografia1},&usuario1);
    bib1.relatorio_estatistico();
    bib1.Emprestar({&livro1,&monografia1},&usuario1,30,01,2021);
    bib1.Emprestar({&livro2},&usuario1,30,1,2021);
    bib1.ShowAllBooks();
    bib1.ShowAllMono();
    bib1.Devolucao({&livro1,&livro2},&usuario1,30,3,2021);
    bib1.Emprestar({&livro1},&usuario2,20,4,2022);
    bib1.relatorio_estatistico();
    return 0;
}