//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "zip_apply_filter.h"
using namespace std;

static void test_2() {
    std::vector<std::string> names = {"Ana", "Luis", "Elena"};
    std::vector<int> ages = {20, 17, 19};

    const auto adults = zip_apply_filter(
        [](const std::string& name, const int age) {
            return name + ": " + std::to_string(age);
        },
        [](const std::string& s) {
            return s.find(": 1") != std::string::npos;
        },
        names,
        ages
    );
    for (const auto& item: adults)
        std::cout << item << '\n';
}

TEST_CASE("Question #2.2") {
    execute_test("question_2_test_2.in", test_2);
}