#include <iostream>
#include <cassert>
#include "mathutils.h"

int main() {
    try {
        // Test isPrime function
        int num = 7;
        bool is_prime = mathutils::isPrime(num);
        std::cout << "Test isPrime: " << num << " is " << (is_prime ? "prime" : "not prime") << std::endl;
        assert(is_prime == true);  // Check if it is correctly identified as prime

        // Test factorial function
        int fact = 5;
        int expected_fact = 120;  // Expected factorial of 5 is 120
        int calculated_fact = mathutils::factorial(fact);
        std::cout << "Test factorial: Factorial of " << fact << " is " << calculated_fact << std::endl;
        assert(calculated_fact == expected_fact);

        // Additional test for negative factorial
        fact = -1;
        expected_fact = -1;
        calculated_fact = mathutils::factorial(fact);
        std::cout << "Test factorial negative: Factorial of " << fact << " is " << calculated_fact  << std::endl;
        assert(expected_fact == calculated_fact);  // Assuming -1 is returned for invalid input

        std::cout << "All tests passed!" << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Test failed with exception: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Test failed with unknown error!" << std::endl;
        return 1;
    }

    return 0;
}
