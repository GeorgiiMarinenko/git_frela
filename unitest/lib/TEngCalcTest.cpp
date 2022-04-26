#include "TEngCalcTest.h"

#include <iostream>

TEngCalcTest::TEngCalcTest() {}

TEngCalcTest::~TEngCalcTest() {}

std::string TEngCalcTest::test(TEngCalc& entity) {
    if (!this->subTest(entity)) {
        return false;
    }

    if (!this->sumTest(entity)) {
        return false;
    }

    if (!this->squareRTest(entity)) {
        return false;
    }
    return true;
}
std::string TEngCalcTest::sumTest(TEngCalc& entity) {
    std::cout << "\tТест №1\t" << std::endl;
    if (entity.sum(5.5, 4.5) != (double)10) {
        return "Тест sum не пройден\n результат выражения  = 10 а не " + entity.sum(5, 4);

    } else {
        std::cout << "sumTest пройден" << std::endl;
        return true;
    }
}

std::string TEngCalcTest::subTest(TEngCalc& entity) {
    std::cout << "\tТест №2\t" << std::endl;
    if (entity.sub(5.5, 4.4) != (double)1.1) {
        std::cout << "Тест sum не пройден\n результат выражения  = 1.1 а не "
                  << entity.sum(5, 4);
        return false;
    } else {
        std::cout << "subTest пройден" << std::endl;
        return true;
    }
}

std::string TEngCalcTest::squareRTest(TEngCalc& entity) {
    std::cout << "\tТест №2\t" << std::endl;
    if (entity.squareR(4) != (int)2) {
        std::cout << "Тест sum не пройден\n результат выражения  = 2 а не "
                  << entity.squareR(4);
        return false;
    } else {
        std::cout << "subTest пройден" << std::endl;
        return true;
    }
}