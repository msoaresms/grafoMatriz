#include "Grafo.h"

void Grafo::inicializar() {
    for (int i = 0; i <= this->n; i++){
        for (int j = 0; j <= this->n; j++){
            mat[i][j] = 0;
        }
    }
}

void Grafo::inserirAresta(Vertex u, Vertex v, Weight w){
    mat[u][v] = w;
    mat[v][w] = w;
    m++;
}

void Grafo::mostrar() {
    int k = 3;
    cout << "   ";
    for (int j = 1; j <= this->n; j++){
        cout << setw(k) << j;
    }
    cout << endl;
    for (int j = 1; j <= (this->n*k+3); j++){
        cout << "-";
    }
    cout << endl;
    for (int i = 1; i <= this->n; i++){
        cout << setw(1) << i;
        cout << " |";
        for (int j = 1; j <= this->n; j++){
            cout << setw(k) << mat[i][j];
        }
        cout << endl;
    }
}