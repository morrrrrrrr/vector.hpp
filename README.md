# vector.hpp

Header-Only C++ 11 (geometry) Vector Library.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Usage](#usage)
- [Installation](#installation)
- [License](#license)

## Description

The `vector.hpp` library provides a lightweight and flexible header-only C++ 11 implementation for geometric vectors. It's designed to facilitate various vector operations, catering to different dimensions and data types.

## Features

- Custom Type Vectors (types need operator+, -, *, /, etc with themselves and a default constructor)
- Custom Dimension Vectors (for example Vector`2`, Vector`3`, ect.)

### Core Functionality:

The library supports common vector operations, including magnitude calculation, normalization, arithmetic operations (addition, subtraction, multiplication, division), dot product, cross product (for 3D vectors), and type conversions.

### Use Cases:

- **Graphics Programming**: Suitable for representing points, directions, and transformations in 2D and 3D graphics programming.

- **Physics Simulations**: Useful in simulating physical entities' positions, velocities, and accelerations.

- **Mathematical Calculations**: Facilitates mathematical operations and computations involving vectors in various fields like linear algebra, computational geometry, and machine learning.

## Usage

### Initialization

```cpp
Vector<3, float> my_vector = {
    1, 2, 3
};

// removes the third dimension
Vector<2, float> lower_dim(my_vector);
// uses default constructor for 4th T
Vector<4, float> higher_dim(my_vector);

// convert to other type (uses static_cast)
Vector<3, int> other_type(my_vector);
```

### Operations

```cpp
// init
using Vector3f = Vector<3, float>;

Vector3f v1 = {
    2, 1.5, 5
}, v2 = {
    1, 0, 0
};

// operations: on the left side are non-modifying(const) operations. in comments are the equivilants that change the vector
std::cout << "Printing:\t\t" << v << "\n";
std::cout << "Squared Magnitude:\t" << v.squared_magnitude() << "\n";
std::cout << "Magnitude:\t\t" << v.magnitude() << "\n";
std::cout << "Normalized:\t\t" << v.normalized() << "\n";  // vector.normalize()   
std::cout << "Inverted:\t\t" << v.inverted() << "\n";      // vector.invert()      
std::cout << "Absolute:\t\t" << v.abs() << "\n";           
std::cout << "Addition:\t\t" << v + v2 << "\n";            // vector += other      
std::cout << "Subtraction:\t\t" << v - v2 << "\n";         // vector -= other      
std::cout << "Multiplication:\t\t" << v * 2.0f << "\n";    // vector *= num        
std::cout << "Division:\t\t" << v / 2.0f << "\n";          // vector /= num        

std::cout << "Dot:\t\t\t" << vector::dot(v, v2) << "\n";
std::cout << "Cross:\t\t\t" << vector::cross(v, v2) << "\n"; // only works for 3-dimensional vectors!
```

## Installation

This is a header-only library. you just need to put it in your include directory and include it in your project.

    #include "include/vector.hpp" // for example

The library works with c++11 and above.

Compiled on Windows 10 with MinGW g++

```bash
g++ .\test.cpp -o test.exe
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
