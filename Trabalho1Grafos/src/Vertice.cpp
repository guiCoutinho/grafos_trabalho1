#include "Vertice.h"

Vertice::Vertice(int IdDestino, int p)
{
    IdVerticeDestino = IdDestino;
    Peso = p;
}

Vertice::~Vertice()
{
    //dtor
}

void Vertice::setValoresAresta(int IdDestino, int p)
{
    IdVerticeDestino = IdDestino;
    Peso = p;
}

void Vertice::setPeso(int p)
{
    Peso = p;
}

int Vertice::getIdArestaDestino()
{
    return IdVerticeDestino;
}

int Vertice::getPeso()
{
    return Peso;
}
