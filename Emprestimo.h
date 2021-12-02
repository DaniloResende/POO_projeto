#include <string>
#include <vector>

using namespace std;

class Emprestimo
{
private:
    string dataEmprestadoInicio;
    string dataEmprestadoFim;
    int emprestado; //1=emprestado; 0=não esta emprestado
public:
   Emprestimo(/* args */);
   ~Emprestimo();
    void empresta();
};