#ifndef filme_h
#define filme_h

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Filme
{
private:
  string nome;
  double nota;
  int posicao;
  string genero;
  string tags;
public:
  Filme(string s_nome ,string s_genero ,string s_tags , double s_nota , int s_posicao);
  void set_nome(string s_nome);
  void set_nota(double s_nota);
  void set_posicao(int s_posicao);
  void set_genero(string s_genero);
  void set_tags(string s_tags);
  string get_nome();
  double get_nota();
  int get_posicao();
  string get_genero();
  string get_tags();
};

#endif
