#include "TCalcTest.h"

#include <iostream>

// TCalcTest::TCalcTest() {}

// TCalcTest::~TCalcTest() {}

std::string TCalcTest::test() {
    std::string rez;
    rez += this->sumTest();
    rez += this->subTest();
    return rez;
}
std::string TCalcTest::sumTest() {
    TCalc exmpl;
    if (exmpl.sum(5, 4) != (int)9) {
        std::string rez;
        rez =
            "\tТест №1\t \nТест sum не пройден\n результат выражения  = 9 а "
            "не " +
            std::to_string(exmpl.sum(5, 4)) + "\n";
        return rez;
    } else {
        return "\tТест №1\t \nsumTest пройден\n";
    }
}

std::string TCalcTest::subTest() {
    TCalc exmpl;
    if (exmpl.sub(5, 4) != (int)1) {
        std::string rez;
        rez =
            "\tТест №1\t \nТест sum не пройден\nРезультат выражения  = 1 а "
            "не " +
            std::to_string(exmpl.sum(5, 4)) + "\n";
        return rez;
    } else {
        return "\tТест №2\t\nsubTest пройден\n";
    }
}
