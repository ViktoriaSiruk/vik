#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;
    double resultAdd = calculator.Add(5.0, 3.0);
    double resultSub = calculator.Sub(5.0, 3.0);

    std::cout << "Addition result: " << resultAdd << std::endl;
    std::cout << "Subtraction result: " << resultSub << std::endl;

    return 0;
}
