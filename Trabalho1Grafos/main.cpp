#include <iostream>
#include "grafo_matriz.h"

using namespace std;

int main()
{
    int n = 4;
    grafo_matriz teste(4);

    teste.add_aresta(0, 1, 5);
    teste.add_aresta(0, 2, 7);
    teste.add_aresta(1, 3, 2);
    teste.add_aresta(2, 3, 1);

    teste.imprime();

    return 0;
}
