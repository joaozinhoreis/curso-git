#include "Aluno.hpp"

Aluno::Aluno(int diaNa, int mesNa, int anoNa, int i, const char *nome) : Pessoa(diaNa, mesNa, anoNa,i,  nome)
{
    RA = -1;
    id = i;
}

Aluno::Aluno(int i):Pessoa(i)
{
    id = i;
    RA = 0;
}

Aluno::~Aluno()
{
}

void Aluno::setRA(int ra)
{
    RA = ra;
}

int Aluno::getRA()
{
    return RA;
}