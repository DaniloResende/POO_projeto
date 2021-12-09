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
    Monografia monografia1("Equipes auto-gerenciáveis","Pedro Leite da Silva",90,2020,"José Araújo Pinto","Gestão","UFS","Conquistas e desafios de equipes auto-gerenciáveis");
    Periodico periodico1("Jornal do dia","Nelson Freire",20,2020,"15","Aracaju-SE","Nelson Edits");
    Usuario usuario1("090.096.115-58","Nelson Jacomé da Silva","12/12/2002");
    Usuario usuario2("065.031.255-39","Nena Letícia dos Santos", "11/09/2001");
    Usuario usuario3("526.115.252-69","Renan Henrique Danilo Nogueira","10/9/1980");
    Usuario usuario4("807.389.473-42","Luciana Letícia Gabrielly Ribeiro","03/11/1969");
    Usuario usuario5("783.984.975-05","Isadora Aparecida Assis","22/03/1996");
    Usuario usuario6("328.586.978-09","Arthur João Ruan Fernandes","19/07/2001");
    Usuario usuario7("280.010.655-70","Maitê Amanda Heloisa Vieira","25/04/2000");
    Usuario usuario8("316.751.923-16","Alícia Laís de Paula","05/08/1997");
    Usuario usuario9("612.364.766-03","Jéssica Mariane Luiza Caldeira","20/05/1957");
    Usuario usuario10("129.417.311-13","Márcio Lucca da Cunha","24/11/1957");
    Usuario usuario11("705.639.723-94","César Giovanni da Rosa","12/05/1997");
    Usuario usuario12("957.594.224-80","André Guilherme Nunes","02/08/1946");
    Usuario usuario13("378.689.278-44","Letícia Julia Barros","03/11/1962");
    Biblioteca bib1;
    bib1.AddItem(&livro1);
    bib1.AddItem(&livro2);
    bib1.AddItem(&livro3);
    bib1.AddItem(&livro4);
    bib1.AddItem(&livro5);
    bib1.AddItem(&livro6);
    bib1.AddItem(&livro7);
    bib1.AddItem(&livro8);
    bib1.AddItem(&livro9);
    bib1.AddItem(&livro10);
    bib1.AddItem(&monografia1);
    bib1.AddItem(&periodico1);
    bib1.AddUser(&usuario1);
    bib1.AddUser(&usuario2);
    bib1.AddUser(&usuario3);
    bib1.AddUser(&usuario4);
    bib1.AddUser(&usuario5);
    bib1.AddUser(&usuario6);
    bib1.AddUser(&usuario7);
    bib1.AddUser(&usuario8);
    bib1.AddUser(&usuario9);
    bib1.AddUser(&usuario10);
    bib1.AddUser(&usuario11);
    bib1.AddUser(&usuario12);
    bib1.AddUser(&usuario13);
    bib1.Reservar({&monografia1},&usuario1);
    bib1.relatorio_estatistico();
    bib1.Emprestar({&livro1,&monografia1},&usuario1,30,01,2021);
    bib1.Emprestar({&livro2},&usuario1,30,1,2021);
    bib1.Emprestar({&livro3,&livro4,&livro5},&usuario5,4,10,2022);
    bib1.ShowAllBooks();
    bib1.ShowAllMono();
    bib1.Emprestar({&livro1},&usuario2,20,4,2022);
    bib1.ShowAllUsers();
    bib1.ShowAllPerio();
    bib1.relatorio_estatistico();
    return 0;
}