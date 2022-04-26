#include <iostream>

#include "TCalc.h"
#include "TEngCalc.h"

int main() {
    std::cout << "Main project work" << std::endl;
    TCalc calc;
    int num1 = 5;
    int num2 = 4;

    std::cout << "Calc work" << std::endl;
    std::cout << "Calc sum: " << num1 << '+' << num2 << " = "
              << calc.sum(num1, num2) << std::endl;
    std::cout << "Calc sub: " << num1 << '-' << num2 << " = "
              << calc.sub(num1, num2) << std::endl;
    std::cout << "Calc end work" << std::endl;

    TEngCalc EngineCalc;
    double num3 = 5.6;
    double num4 = 4.5;
    std::cout << "Engineer calc work" << std::endl;
    std::cout << "Engineer calc sum: " << num3 << '+' << num4 << " = "
              << EngineCalc.sum(num3, num4) << std::endl;
    std::cout << "Engineer calc sub: " << num3 << '-' << num4 << " = "
              << EngineCalc.sub(num3, num4) << std::endl;
    std::cout << "Engineer calc square: " << num3 << '-' << num4 << " = "
              << EngineCalc.squareR(int(num4)) << std::endl;
    std::cout << "Engineer calc end work" << std::endl;

    std::cout << "Main project finish work" << std::endl;
    return 0;
}