#include "grafo_matriz.h"
#include <iostream>
#include <vector>

using namespace std;

grafo_matriz::grafo_matriz(int max)
{
    numVertices = max;

    vertices = new int[numVertices];
    for(int i =1; i <= numVertices; i++) {
        vertices[i - 1] = i;
    }

    matrizAdjacencias = new int*[numVertices];
    for(int i =0; i < numVertices; i++) {
        matrizAdjacencias[i] = new int[numVertices];
    }

    for(int i = 0; i<numVertices; i++) {
        for(int j = 0; j<numVertices; j++) {
            matrizAdjacencias[i][j] = NULL;
        }
    }

}

grafo_matriz::~grafo_matriz()
{
    delete [] vertices;
    for(int i = 0; i<numVertices; i++) {
        delete [] matrizAdjacencias[i];
    }

    delete [] matrizAdjacencias;
}

void grafo_matriz::add_aresta(int v1, int v2, int p)
{
    matrizAdjacencias[v1][v2] = p;
    matrizAdjacencias[v2][v1] = p;
}

void grafo_matriz::imprime()
{
    cout << "Lista de Vertices do grafo: " << endl;
    for(int i = 0; i < numVertices; i++) {
        cout << vertices[i] << " ";
    }
    cout << endl;

    cout << "Matriz de Adjacencias do grafo: " << endl;
    for(int i = 0; i < numVertices; i++) {
        for(int j = 0; j < numVertices; j++) {
            cout << matrizAdjacencias[i][j] << " ";
        }
        cout << endl;
    }
}
