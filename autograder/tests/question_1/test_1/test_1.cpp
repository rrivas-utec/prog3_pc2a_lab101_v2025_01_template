//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "fused_transform_reduce.h"
using namespace std;

static void test_1() {
    std::vector<int> v = {1, 2, 3, 4};
    auto r = fused_transform_reduce(
        v,
        [](const int x) { return x * x; },
        std::plus<>(),
        0
    );
    std::cout << r;
}

TEST_CASE("Question #1.1") {
    execute_test("question_1_test_1.in", test_1);
}