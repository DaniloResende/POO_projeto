#include<string>
using namespace std;

class Data
{
private:
    int dia;
    int mes;
    int ano;
public:
    int get_dia();
    int get_mes();
    int get_ano();
    void set_dia(int dia);
    void set_mes(int mes);
    void set_ano(int ano);
    string string_data();
    Data(/* args */);
    ~Data();
};

Data::Data(/* args */)
{
}

Data::~Data()
{
}
