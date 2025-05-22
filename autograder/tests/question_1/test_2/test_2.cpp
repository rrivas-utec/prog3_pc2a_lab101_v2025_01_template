//
// Created by rudri on 9/12/2020.
//
#include <list>
#include "catch.hpp"
#include "redirect_io.h"
#include "fused_transform_reduce.h"
using namespace std;

static void test_2() {
    const std::list<int> l = {1, 2, 3, 4};
    const auto r = fused_transform_reduce(
        l,
        [](const int x) { return x * 2; },
        [](const int a, const int b) { return a + b; },
        0
    );
    std::cout << r;
}

TEST_CASE("Question #1.2") {
    execute_test("question_1_test_2.in", test_2);
}