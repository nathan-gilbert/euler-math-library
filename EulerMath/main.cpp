#include <iostream>
#include "EulerMathLibrary.h"

int main()
{
    std::cout << "Project Euler Main Program" << std::endl;
    bool is13prime = EulerMath::HelperFunctions::isPrime(13);
    std::cout << "The number 13 is" << (is13prime ? " " : " not ") << "prime." << std::endl;
    return 0;
}

