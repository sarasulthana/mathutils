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

    // Test factorial for negative number (expect -1)
    int negative_fact = mathutils::factorial(-1);
    std::cout << "Factorial of -1 is " << negative_fact << "\n";  // Expected output: -1
    assert(negative_fact == -1);  // Check if factorial of negative number is -1

    return 0;

}
