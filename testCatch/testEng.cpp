#include <catch2/catch_all.hpp>
#include "TEngCalc.h"

TEST_CASE ("SumEngTest are computed", "[sumTest]") {
    TEngCalc exmpl;
    REQUIRE(exmpl.sum(5.5, 4.6) == Catch::Approx(10.1)); 
}

TEST_CASE ("SubEngTest are computed", "[subTest]") {
    TEngCalc exmpl;
    REQUIRE(exmpl.sub(5.5, 4.1) ==  Catch::Approx(1.4)); 
}

TEST_CASE ("SubEngTest are computed", "[squareRTest]") {
    TEngCalc exmpl;
    REQUIRE(exmpl.squareR(4) == 2); 
}