#ifndef GRAFO_H
#define GRAFO_H


class Grafo
{
    public:
        Grafo();
        virtual ~Grafo();

        bool eh_bipartido();
        int n_conexo();
        int get_grau();
        int get_ordem();
        bool eh_direcionado();
        bool vertice_ponderado();
        bool aresta_ponderada();
        bool eh_completo();
        bool eh_arvore();
        bool possui_articulacao();
        bool possui_ponte();
        void carrega_grafo();
        void novo_grafo();

    protected:

    private:
};

#endif // GRAFO_H
