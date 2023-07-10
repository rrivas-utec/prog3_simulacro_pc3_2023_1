//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "binary_search_tree.h"
using namespace std;

static void test_3_1() {
    // Creando arbol
    binary_search_tree<string, int> bst;
    bst.insert({"A", 10});
    bst.insert({"B", 40});
    bst.insert({"C", 30});
    bst.insert({"D", 38});
    bst.insert({"E", 32});
    // Verificando si es árbol sesgado
    cout << boolalpha << bst.is_skew() << endl; // true

    // Creando arbol
    binary_search_tree<string, int> bst2;
    bst2.insert({"A", 20});
    bst2.insert({"B", 40});
    bst2.insert({"C", 10});
    bst2.insert({"D", 38});
    bst2.insert({"E", 32});
    // Verificando si es árbol sesgado
    cout << boolalpha << bst2.is_skew() << endl; // false

}

TEST_CASE("Question #3.1") {
    execute_test("test_3_1.in", test_3_1);
}