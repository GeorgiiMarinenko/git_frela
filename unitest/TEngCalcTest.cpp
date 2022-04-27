#include "TEngCalcTest.h"

#include <iostream>

// TEngCalcTest::TEngCalcTest() {}

// TEngCalcTest::~TEngCalcTest() {}

std::string TEngCalcTest::test() {
    std::string rez;
    rez += this->sumTest();
    rez += this->subTest();
    rez += this->squareRTest();
    return rez;
}

std::string TEngCalcTest::sumTest() {
    TEngCalc engCalc;
    if (engCalc.sum(5.5, 4.5) != 5.5 + 4.5) {
        return "\tТест №1\t\nТест sum не пройден\n результат выражения  = " +
               std::to_string(5.5 + 4.5) + " а не " +
               std::to_string(engCalc.sum(5.5, 4.5)) + "\n";
    } else {
        return "\tТест №1\t\nsumTest пройден \n ";
    }
}

std::string TEngCalcTest::subTest() {
    TEngCalc engCalc;
    if (engCalc.sub(5.5, 4.4) != (5.5 - 4.4)) {
        return "\tТест №2\t\nТест sub не пройден\n результат выражения  = " +
               std::to_string(5.5 - 4.4) + " а не " +
               std::to_string(engCalc.sub(5.5, 4.4)) + "\n";
    } else {
        return "\tТест №2\t\nsubTest пройден \n";
    }
}

std::string TEngCalcTest::squareRTest() {
    TEngCalc engCalc;
    if (engCalc.squareR(4) != (int)2) {
        return "\tТест №3\t\nТест squareRTest не пройден\n результат выражения "
               " = 2 а не " +
               std::to_string(engCalc.squareR(4)) + "\n";
    } else {
        return "\tТест №3\t\nsquareRTest пройден \n";
    }
}
