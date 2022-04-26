#pragma once
#include "ITest.h"
#include "TEngCalc.h"

class TEngCalcTest : public ITest {
   public:
    TEngCalcTest();
    ~TEngCalcTest();
    std::string test(TEngCalc& entity);
    std::string sumTest(TEngCalc& entity);
    std::string subTest(TEngCalc& entity);
    std::string squareRTest(TEngCalc& entity);
};
