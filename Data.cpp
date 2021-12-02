#include "Data.h"


int Data::get_dia(){
    return dia;

}
int Data::get_mes(){
    return mes;
}


int Data::get_ano(){
    return ano;

}
void Data::set_dia(int p_dia){ 
    dia = p_dia;
    

}
void Data::set_mes(int p_mes){
    mes = p_mes;

}
void Data::set_ano(int p_ano){
    ano = p_ano;

}
string Data::string_data(){
    string data_str;
    data_str = to_string(dia) + '/' + to_string(mes) + '/' + to_string(ano);
    return data_str;

}
Data::Data(/* args */){

}
Data::~Data(){

}