#include<string>
#include<vector>
#include "Item.h"

using namespace std;

class Monografia : public Item
{
private:
string orientador;
string curso;
string instituicao;
string tema; 
public:
   Monografia(/* args */);
   ~Monografia();
   void set_orientador(string p_orientador);
   void set_curso(string p_curso);
   void set_instituicao(string p_instituicao);
   void set_tema(string p_tema);
   string get_orientador(string p_orientador);
   string get_curso(string p_curso);
   string get_instituicao(string p_instituicao);
   string get_tema(string p_tema);

};