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

    int factorial(int n)
    {
        if (n == 0)
            return 1;
        int result = 1;
        for (int i = 1; i <= n; ++i)
        {
            result *= i;
        }
        return result;
    }
}