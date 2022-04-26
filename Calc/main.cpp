#include <iostream>
#include "TCalc.h"

using namespace std;

int main(int argc, char *argv[])
{
    TCalc<double> calc;


    calc.add(3.6,8.);
    cout << calc.res() << endl;
    return 0;
}

