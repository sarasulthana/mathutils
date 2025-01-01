#include "mathutils.h"

namespace mathutils
{
    bool isPrime(int number)
    {
        if (number <= 1)
            return false;
        for (int i = 2; i * i <= number; ++i)
        {
            if (number % i == 0)
                return false;
        }
        return true;
    }

    int factorial(int n) {
        if (n < 0) {
            return -1;  // Return -1 for negative inputs (or handle as an error)
        }

        int result = 1;
        for (int i = 1; i <= n; ++i) 
        {
            result *= i;
        }
        return result;
    }


}