#include "TEngCalcTest.h"

#include <iostream>

TEngCalcTest::TEngCalcTest() {}

TEngCalcTest::~TEngCalcTest() {}

std::string TEngCalcTest::test() {
    std::string rez;
    rez += this->sumTest();
    rez += this->subTest();
    rez += this->squareRTest();
    return rez;
}

std::string TEngCalcTest::sumTest() {
    TEngCalc engCalc;
    std::cout << "\tТест №1\t" << std::endl;
    if (engCalc.sum(5.5, 4.5) != (double)10) {
        return "Тест sum не пройден\n результат выражения  = 10 а не " +
               std::to_string(engCalc.sum(5.5, 4.5));
    } else {
        return "sumTest пройден \n ";
    }
}

std::string TEngCalcTest::subTest() {
    TEngCalc engCalc;
    std::cout << "\tТест №2\t" << std::endl;
    if (engCalc.sub(5.5, 4.4) != (double)1.1) {
        return "Тест sub не пройден\n результат выражения  = 1.1 а не " +
        std::to_string(engCalc.sub(5.5, 4.4));
    } else {
        return "subTest пройден \n";
    }
}

std::string TEngCalcTest::squareRTest() {
    TEngCalc engCalc;
    std::cout << "\tТест №2\t" << std::endl;
    if (engCalc.squareR(4) != (int)2) {
        return "Тест squareRTest не пройден\n результат выражения  = 2 а не " +
                std::to_string(engCalc.squareR(4));
    } else {
        return "squareRTest \n";
    }
}