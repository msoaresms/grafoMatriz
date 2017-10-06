#ifndef GRAFOMATRIZ_GRAFO_H
#define GRAFOMATRIZ_GRAFO_H

#include <iostream>
#include <iomanip>
#define NUMVERTICES 100
using namespace std;

typedef int Vertex;
typedef int Weight;

class Grafo {
private:
    Weight mat[NUMVERTICES+1][NUMVERTICES+1];
    int n, m;

public:
    Grafo(int n){
        this-> n = n;
        this->m = 0;
        inicializar();
    }

    void inicializar();
    void inserirAresta(Vertex, Vertex, Weight);
    void mostrar();

};


#endif //GRAFOMATRIZ_GRAFO_H
