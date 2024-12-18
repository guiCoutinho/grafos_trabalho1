#ifndef GRAFO_MATRIZ_H
#define GRAFO_MATRIZ_H


class grafo_matriz
{
    public:
        grafo_matriz(int max);
        virtual ~grafo_matriz();

    protected:

    private:
        int maxVertices;
        int numVertices;
        int* vertices;
        int** matrizAdjacencias;
};

#endif // GRAFO_MATRIZ_H
