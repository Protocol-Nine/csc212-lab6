#include <iostream>

int gcd_finder(int a, int b, int counter);

int main(int argc, char*argv[]) {
    std::cout << gcd_finder(std::stoi(argv[1]), std::stoi(argv[2]), 0) << std::endl;
}

int gcd_finder(int a, int b, int gcd) {
    // Trivial cases of a = 0, b = 0, a = b
    if (a == 0 || a == b) {
        return b;
    }
    if (b == 0) {
        return a;
    }

    if ((gcd == 0) && (a > b)) {
        gcd = b;
    } else if ((gcd == 0) && (b > a)) {
        gcd = a;
    }

    if (a % gcd == 0 && b % gcd == 0) {
        return gcd;
    }

    return gcd_finder(a,b,gcd - 1);

}