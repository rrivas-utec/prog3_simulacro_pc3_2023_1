//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "remove_characters.h"
using namespace std;

static void test_2_1() {
    // Texto
    string text = "esta es una prueba para remover subtextos";
    // Ejecutar remover caracteres
    auto result = remove_characters(text, 2, {'e', 'a', 'r'});
    // Mostrando resultado
    cout << result;	// esta es una prub rmov subtxtos

}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}