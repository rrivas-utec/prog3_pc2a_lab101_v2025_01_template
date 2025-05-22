//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "fused_transform_reduce.h"
#include <algorithm>

static void test_3() {
    const std::vector<std::string> palabras = {
        "Hola", "MUNDO", "plantilla", "C++", "TEMPLATES"
        };

    const auto longitud_total = fused_transform_reduce(
        palabras,
        [](const std::string& s) {
            // Solo contar palabras que estén completamente en mayúsculas
            return std::ranges::all_of(s, [](const unsigned char c) {
                       return std::isupper(c);
                   })
                   ? s.length()
                   : size_t{0};
        },
        std::plus<>(),
        size_t{0}
    );
    std::cout << longitud_total;
}

TEST_CASE("Question #1.3") {
    execute_test("question_1_test_3.in", test_3);
}