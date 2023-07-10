//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "grafo.h"
using namespace std;

static void test_4_1() {
    // Creando grafo
    grafo<string, int, int> g;
    // Agregando vertices
    g.add_vertex({"A", 30});
    g.add_vertex({"B", 40});
    g.add_vertex({"C", 50});
    g.add_vertex({"D", 60});
    // Agregando aristas
    g.add_edge("A", "C", 20);
    g.add_edge("A", "B", 10);
    g.add_edge("B", "D", 30);
    // Verificar si esta conectado
    cout << boolalpha << g.is_connected() << endl; // true.

    // Creando grafo
    grafo<string, int, int> g2;
    // Agregando vertices
    g2.add_vertex({"A", 30});
    g2.add_vertex({"B", 40});
    g2.add_vertex({"C", 50});
    g2.add_vertex({"D", 60});
    // Agregando aristas
    g2.add_edge("A", "B", 20);
    g2.add_edge("C", "D", 30);
    // Verificar si esta conectado
    cout << boolalpha << g2.is_connected() << endl; // false.

}

TEST_CASE("Question #4.1") {
    execute_test("test_4_1.in", test_4_1);
}