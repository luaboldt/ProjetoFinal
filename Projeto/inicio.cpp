#include "inicio.h"
#include "filme.h"

Inicio::Inicio()
{
  Filme inicial("0" , "0" , "0" , 0 , 0);
  set_ultimosFilmesAssistidos(0 , inicial);
  set_ultimosFilmesAssistidos(1 , inicial);
  set_ultimosFilmesAssistidos(2 , inicial);
  set_ultimosFilmesAssistidos(3 , inicial);
  set_ultimosFilmesAssistidos(4 , inicial);
  ctrl = 10;
}

int Inicio::get_ctrl()
{
  return ctrl;
}

void Inicio::set_ctrl()
{

  ctrl++;
  if (get_ctrl() == 15)
  {
    ctrl = 0;
  }
  if (get_ctrl() == 5)
  {
    ctrl = 0;
  }
}
void Inicio::set_ultimosFilmesAssistidos(int ctrl, Filme filme)
{
  ultimosFilmesAssistidos[get_ctrl()] = filme;
}

string Inicio::get_ultimosFilmesAssistidos(int qualnum)
{
  ultimosFilmesAssistidos[qualnum].get_nome();
}

void Inicio::consultarUltimosFilmes()
{
  if((get_ctrl() > 10) || (get_ctrl() < 6))
  {
    get_ultimosFilmesAssistidos(0);
  }

  if((get_ctrl() > 11) || (get_ctrl() < 6))
  {
    get_ultimosFilmesAssistidos(1);
  }

  if((get_ctrl() > 12) || (get_ctrl() < 6))
  {
    get_ultimosFilmesAssistidos(2);
  }

  if((get_ctrl() > 13) || (get_ctrl() < 6))
  {
    get_ultimosFilmesAssistidos(3);
  }

  if((get_ctrl() > 14) || (get_ctrl() < 6))
  {
    get_ultimosFilmesAssistidos(4);
  }
}

void Inicio::sugestaoDeFilme()
  {

  }

string Inicio::procurarPorNome(string nome)
{

}

double Inicio::procurarPorNota(double nota)
{

}

string Inicio::procurarPorGenero(string genero)
{

}
