#include <iostream>

int sum_of_digits(int n);

int main(int argc, char*argv[]){
    int num = std::stoi(argv[1]);
    
    
    std::cout << sum_of_digits(num) << std::endl;
}

// returns the sum of the digits of n recurisvely
int sum_of_digits(int n){
    //  Some process
        // Divide by 10 remainder to get least signifigant digit
        // Integer divide by 10 to shift n right.
    int remainder = n % 10;
    n = n / 10;

    // Return the remainder if end of n reached
    // Else return remainder and move to next digit
    if (n == 0) {
        return remainder;
    } else {
        return remainder + sum_of_digits(n);
    }
}

