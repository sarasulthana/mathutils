#include <iostream>
#include <cassert>
#include "mathutils.h"

int main() {
    // Test isPrime function
    int num = 7;
    bool is_prime = mathutils::isPrime(num);
    assert(is_prime == true); // Check if the number is correctly identified as prime
    std::cout << num << " is a prime number.\n";

    // Test factorial function
    int fact = 5;
    int expected_fact = 120;  // Expected factorial of 5 is 120
    int calculated_fact = mathutils::factorial(fact);
    assert(calculated_fact == expected_fact); // Assert that factorial is calculated correctly
    std::cout << "Factorial of " << fact << " is " << calculated_fact << "\n";

    // Additional tests

    // Test isPrime function with a non-prime number
    num = 4;
    is_prime = mathutils::isPrime(num);
    assert(is_prime == false); // Check if the number is correctly identified as not prime
    std::cout << num << " is not a prime number.\n";

    // Test factorial function with a corner case (0! = 1)
    fact = 0;
    expected_fact = 1;  // 0! = 1 by definition
    calculated_fact = mathutils::factorial(fact);
    assert(calculated_fact == expected_fact); // Assert that factorial of 0 is correct
    std::cout << "Factorial of " << fact << " is " << calculated_fact << "\n";

    // Test negative number for factorial (undefined, should ideally return some error or handle gracefully)
    fact = -1;
    calculated_fact = mathutils::factorial(fact);
    assert(calculated_fact == -1);  // Assuming that -1 is returned for invalid input, or handle accordingly
    std::cout << "Factorial of " << fact << " is " << calculated_fact << "\n";

    std::cout << "All tests passed!" << std::endl;

    return 0;
}
