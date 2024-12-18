#ifndef VERTICE_H
#define VERTICE_H


class Vertice
{
    public:
        Vertice(int IdDestino, int p);
        virtual ~Vertice();

        void setValoresAresta(int IdDestino, int p);
        void setPeso(int p);
        int getIdArestaDestino();
        int getPeso();

    protected:

    private:
        int IdVerticeDestino;
        int Peso;
};

#endif // VERTICE_H
