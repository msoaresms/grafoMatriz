#include <iostream>
#include "Grafo.h"

int main() {
    Grafo g(9);

    g.inserirAresta(1, 2, 10);
    g.inserirAresta(3, 5, 42);
    g.inserirAresta(1, 5, 15);
    g.mostrar();
}