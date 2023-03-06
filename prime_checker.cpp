#include <iostream>
#include <cmath>

bool prime_checker(int n, int counter);

int main(int argc, char*argv[]) {
    std::cout << prime_checker(std::stoi(argv[1]), 2) << std::endl;
}


bool prime_checker(int n, int counter) {
    // If n is a prime number,
    // 2 through sqrt(n) are not factors of n
    if (n % counter == 0) {
        return false;
    } else if (counter > sqrt(n)) {
        return true;
    }
    return prime_checker(n, counter + 1);
}