#define CATCH_CONFIG_MAIN

#include <catch2/catch_test_macros.hpp>
#include "TCalc.h"

TEST_CASE ("SumTest are computed", "[sumTest]") {
    TCalc exmpl;
    REQUIRE(exmpl.sum(5, 4) == 9); 
}

TEST_CASE ("SubTest are computed", "[subTest]") {
    TCalc exmpl;
    REQUIRE(exmpl.sub(5, 4) == 1); 
}