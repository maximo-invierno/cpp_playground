#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers.hpp>
#include "../src/two_sum.hpp"

TEST_CASE("input = [2,7,11,15], sum = 9 -> [0,1]") {
    auto indices = two_sum({2,7,11,15}, 9);
    const std::vector<int> result{0,1};
    CHECK(indices == result);
}

TEST_CASE("input = [3,2,4], sum = 6 -> [1,2]") {
    auto indices = two_sum({3,2,4}, 6);
    const std::vector<int> result{1,2};
    CHECK(indices == result);
}

TEST_CASE("input = [3,3], sum = 6 -> [0,1]") {
    auto indices = two_sum({3,3}, 6);
    const std::vector<int> result{0,1};
    CHECK(indices == result);
}

TEST_CASE("input = [3,2], sum = 6 -> Exception") {
    CHECK_THROWS_WITH(two_sum({3,2}, 6), "Solution does not exist.");
}

