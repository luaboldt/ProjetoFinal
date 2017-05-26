#ifndef inicio_h
#define inicio_h

#include "filme.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Inicio
{
private:
  Filme ultimosFilmesAssistidos[5];
  int ctrl;
public:
  Inicio();
  void set_ultimosFilmesAssistidos(int ctrl , Filme filme);
  string get_ultimosFilmesAssistidos(int qualnum);
  void set_ctrl();
  int get_ctrl();
  void consultarUltimosFilmes();
  void sugestaoDeFilme();
  string procurarPorNome(string nome);
  double procurarPorNota(double nota);
  string procurarPorGenero(string genero);
};

#endif
