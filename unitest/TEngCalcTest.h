#pragma once
#include "ITest.h"
#include "TEngCalc.h"

class TEngCalcTest : public ITest {
   public:
    TEngCalcTest();
    ~TEngCalcTest();
    virtual std::string test() override;
    std::string sumTest();
    std::string subTest();
    std::string squareRTest();
};
