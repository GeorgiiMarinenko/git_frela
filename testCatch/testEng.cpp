#include <catch2/catch_test_macros.hpp>
#include "TEngCalc.h"

TEST_CASE ("SumEngTest are computed", "[sumTest]") {
    TEngCalc exmpl;
    REQUIRE(exmpl.sum(5, 4) == 9); 
}

TEST_CASE ("SubEngTest are computed", "[subTest]") {
    TEngCalc exmpl;
    REQUIRE(exmpl.sub(5, 4) == 1); 
}

TEST_CASE ("SubEngTest are computed", "[squareRTest]") {
    TEngCalc exmpl;
    REQUIRE(exmpl.squareR(4) == 2); 
}