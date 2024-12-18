#include "grafo_matriz.h"

grafo_matriz::grafo_matriz(int max)
{
    numVertices = 0;
    maxVertices = max;

    vertices = new int[maxVertices];

    matrizAdjacencias = new int*[maxVertices];
    for(int i =0, i<maxVertices, i++) {
        matrizAdjacencias[i] = new int[maxVertices];
    }

    for(int i = 0, i<maxVertices, i++) {
        for(int j = 0, j<maxVertices, j++) {
            matrizAdjacencias[i][j] = NULL;
        }
    }

}

grafo_matriz::~grafo_matriz()
{
    delete [] vertices;
    for(int i = 0, i<maxVertices, i++) {
        delete [] matrizAdjacencias[i];
    }

    delete [] matrizAdjacencias;
}
