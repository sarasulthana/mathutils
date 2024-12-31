#include <iostream>
#include "mathutils.h"

int main() {
    // Test isPrime function
    int num = 7;
    if (mathutils::isPrime(num)) {
        std::cout << num << " is a prime number.\n";
    } else {
        std::cout << num << " is not a prime number.\n";
    }

    // Test factorial function
    int fact = 5;
    std::cout << "Factorial of " << fact << " is " << mathutils::factorial(fact) << "\n";

    return 0;
}
