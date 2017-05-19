#include "filme.h"

Filme::Filme(string s_nome ,string s_genero ,string s_tags , double s_nota , int s_posicao)
{
  set_nome(s_nome);
  set_nota(s_nota);
  set_tags(s_tags);
  set_posicao(s_posicao);
  set_genero(s_genero);
}

void Filme::set_nome(string s_nome)
{
  nome = s_nome;
}

void Filme::set_nota(double s_nota)
{
  nota = s_nota;
}

void Filme::set_tags(string s_tags)
{
  tags = s_tags;
}

void Filme::set_posicao(int s_posicao)
{
  posicao = s_posicao;
}

void Filme::set_genero(string s_genero)
{
  genero = s_genero;
}

string Filme::get_nome()
{
  return nome;
}

string Filme::get_tags()
{
  return tags;
}

string Filme::get_genero()
{
  return genero;
}

double Filme::get_nota()
{
  return nota;
}

int Filme::get_posicao()
{
  return posicao;
}
