#ifndef GRAFO_MATRIZ_H
#define GRAFO_MATRIZ_H


class grafo_matriz
{
    public:
        grafo_matriz(int max);
        virtual ~grafo_matriz();
        void imprime();
        void add_aresta(int v1, int v2, int p);

    protected:

    private:
        int numVertices;
        int* vertices;
        int** matrizAdjacencias;

};

#endif // GRAFO_MATRIZ_H
