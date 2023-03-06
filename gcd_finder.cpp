#include <iostream>

int gcd_finder(int a, int b);

int main(int argc, char*argv[]) {
    int a, b;

    // Set a as the larger of the two operands
    if (std::stoi(argv[1]) >= std::stoi(argv[2])) {
        a = std::stoi(argv[1]);
        b = std::stoi(argv[2]);
    } else {
        a = std::stoi(argv[2]);
        b = std::stoi(argv[1]);
    }
    
    
    std::cout << gcd_finder(a,b) << std::endl;
}

// Returns the gcd of two integer, assuming a is greater than or equal to b
int gcd_finder(int a, int b) {
    // Trivial cases of a or b = 0, or a = b
    if (a == 0 || a == b) {
        return b;
    } else if (b == 0) {
        return a;
    } else {
        // Euclidean Algorithm
            // GCD of b and the remainder of a / b
        return gcd_finder(b, a % b);
    }
}