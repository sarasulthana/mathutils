# mathutils
A C++ library for mathematical utilities.

MathUtils is a lightweight C++ library designed to provide common mathematical utilities, including prime number checks, factorial calculations, GCD/LCM functions, and more. It is designed to be easy to use and integrate into your C++ projects.


## Table of Contents
- [mathutils](#mathutils)
  - [Table of Contents](#table-of-contents)
  - [Installation](#installation)
  - [Usage](#usage)
  - [Functions](#functions)
    - [`bool isPrime(int num)`](#bool-isprimeint-num)
    - [`int factorial(int num)`](#int-factorialint-num)
    - [`int gcd(int a, int b)`](#int-gcdint-a-int-b)
    - [`int lcm(int a, int b)`](#int-lcmint-a-int-b)
  - [Contributing](#contributing)
  - [License](#license)


## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/username/mathutils.git

2.  Navigate to the project folder: 
    ```bash
   cd mathutils

3. Create a build directory and run CMake:
   ```bash
   mkdir build
   cd build
   cmake ..

4. Build the library :
   ```bash
   build

5. Install the library:
   ```bash
   sudo make install

   Now, you can include mathutils.h in your project and use the functionality.

## Usage

Provide examples of how to use your library once it is installed. Be sure to include code snippets and possible outputs. Make it clear how users can integrate it into their own projects.

## Functions

### `bool isPrime(int num)`
Checks if the given number is a prime number.

- **Parameters**: 
  - `num`: The number to check.
- **Returns**: `true` if the number is prime, `false` otherwise.

### `int factorial(int num)`
Calculates the factorial of the given number.

- **Parameters**:
  - `num`: The number to calculate the factorial of.
- **Returns**: The factorial of the number.

### `int gcd(int a, int b)`
Computes the greatest common divisor of two integers using Euclid's algorithm.

- **Parameters**:
  - `a`: First integer.
  - `b`: Second integer.
- **Returns**: The greatest common divisor of `a` and `b`.

### `int lcm(int a, int b)`
Computes the least common multiple of two integers.

- **Parameters**:
  - `a`: First integer.
  - `b`: Second integer.
- **Returns**: The least common multiple of `a` and `b`.


## Contributing

We welcome contributions to this project! If you'd like to contribute, please follow these steps:

1. Fork the repository.
2. Clone your fork locally:
   ```bash
   git clone https://github.com/your-username/mathutils.git
3. Create a new branch for your changes:
   ```bash
   git checkout -b feature-name
4. Make your changes and commit them:
   ```bash
   git commit -m "Add feature"
5. Push your changes to your fork:
   ```bash
   git push origin feature-name
6. Submit a pull request to the main repository.

Please ensure that your changes are well-documented and thoroughly tested.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.








