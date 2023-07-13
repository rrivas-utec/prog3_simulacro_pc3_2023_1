//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "nearest_spheres.h"
using namespace std;

static void test_1_1() {
    // Crear functor
    nearest_spheres<int, double> ns;
    // Agregar esferas
    ns.add_sphere(10, 2);	// #1
    ns.add_sphere(5, 1);	// #2
    ns.add_sphere(8, 2);	// #3
    ns.add_sphere(20, 1);	// #4
    ns.add_sphere(15, 2);	// #5
    // Obteniendo esferas en orden: #1, #3, #5
    vector<spheres<int, double>> spheres = ns(3);
    // Mostrando resultado
    cout << spheres;
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}