//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "zip_apply_filter.h"
#include <deque>
#include <vector>
#include <list>
using namespace std;

static void test_1() {
    const std::vector<int> v1 = {1, 2, 3, 3, 4, 5, 6};
    const std::list<int> l1 = {4, 5, 6, 1, 3, 3, 1};

    const auto result = zip_apply_filter<std::deque>(
        [](const int a, const int b) { return a + b; },
        [](const int sum) { return sum % 2 == 0; },
        v1, l1
    );
    for (const auto& item: result)
        std::cout << item << '\n';
}

TEST_CASE("Question #2.1") {
    execute_test("question_2_test_1.in", test_1);
}