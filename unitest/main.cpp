#include <iostream>
#include <vector>

#include "ITest.h"
#include "TCalcTest.h"
#include "TEngCalcTest.h"
using namespace std;

int main(void) {
    vector<ITest *> test;
    test.push_back(new TCalcTest);
    test.push_back(new TEngCalcTest);
    for (auto &item : test) {
        cout << item->test() << endl;
    }
    return 0;
}
