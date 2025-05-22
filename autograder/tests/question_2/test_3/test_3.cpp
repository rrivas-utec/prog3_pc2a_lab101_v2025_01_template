//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "zip_apply_filter.h"
using namespace std;

static void test_3() {
    const std::vector<std::string> nombres = {"Ana", "Luis", "Elena", "Maria"};
    const std::vector<int> edades = {20, 17, 19, 18};
    const std::vector<double> alturas = {1.62, 1.75, 1.58, 1.63};

    auto filtrado = zip_apply_filter(
        [](const std::string& nombre, const int edad, const double altura) {
            return nombre + ": " + std::to_string(edad) + " años, " +
                   std::to_string(altura) + "m";
        },
        [](const std::string& desc) {
            return desc.find("1.6") != std::string::npos;
        },
        nombres, edades, alturas
    );
    for (const auto& item: filtrado)
        std::cout << item << '\n';

}

TEST_CASE("Question #2.3") {
    execute_test("question_2_test_3.in", test_3);
}