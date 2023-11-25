
#include "vector.hpp"
using namespace vector;
using Vector3f = vector::Vector<3, float>;
using Vector3i = vector::Vector<3, int>;

int main() {
    Vector3f v = { 2.7, 2.5, -1.1 };
    Vector3f v2 = { 3.1, -1.5, 2.1 };

    std::cout << v << "\n"; // "0, 2, -1"

    Vector3i v_int(v);

    std::cout << v_int << "\n";

// non modifying operations
    std::cout << "Printing:\t\t" << v << "\n";
    std::cout << "Squared Magnitude:\t" << v.squared_magnitude() << "\n";
    std::cout << "Magnitude:\t\t" << v.magnitude() << "\n";
    std::cout << "Normalized:\t\t" << v.normalized() << "\n";
    std::cout << "Inverted:\t\t" << v.inverted() << "\n";
    std::cout << "Absolute:\t\t" << v.abs() << "\n";
    std::cout << "Addition:\t\t" << v + v2 << "\n";
    std::cout << "Subtraction:\t\t" << v - v2 << "\n";
    std::cout << "Multiplication:\t\t" << v * 2.0f << "\n";
    std::cout << "Division:\t\t" << v / 2.0f << "\n";

    std::cout << "Dot:\t\t\t" << vector::dot(v, v2) << "\n";
    std::cout << "Cross:\t\t\t" << vector::cross(v, v2) << "\n"; // only works for 3-dimensional vectors!

    return 0;
}
