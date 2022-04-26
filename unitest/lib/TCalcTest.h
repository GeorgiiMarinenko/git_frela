#pragma once
#include "ITest.h"
#include "TCalc.h"

class TCalcTest: public ITest {
   public:
    TCalcTest();
    ~TCalcTest();
    virtual std::string test() override;
    std::string sumTest();
    std::string subTest();
};