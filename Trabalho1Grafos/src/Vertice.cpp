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

Vertice::setValoresAresta(int IdDestino, int p)
{
    IdVerticeDestino = IdDestino;
    Peso = p;
}

Vertice::setPeso(int p)
{
    Peso = p;
}

Vertice::getIdArestaDestino()
{
    return IdVerticeDestino;
}

Vertice::getPeso()
{
    return Peso;
}
