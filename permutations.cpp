#include <iostream>
#include <vector>

// Outputs all permutations of an array of ints.
void permutations(std::vector<int> &a, int current_permutation);
// Prints the contents of a vector to terminal.
void print_vector(std::vector<int> a);

int main(int argc, char*argv[]) {
    // CLA "n"
    int n = std::stoi(argv[1]);

    // Create a vector containing 1 through n
    std::vector<int> n_vector;

    for (int i = 1; i <= n; i++) {
        n_vector.push_back(i);
    }

    permutations(n_vector, n_vector.size());
    
}


// Heap's Algorithm
void permutations(std::vector<int> &a, int current_permutation) {
    // if current_permutation reaches 1, print array and return
    if (current_permutation == 1) {
        print_vector(a);
        return;
    }

    for (int i = 0; i < current_permutation; i++) {
        permutations(a, current_permutation - 1);

        // for odd permutations
            //swap first and last free element
        if (current_permutation % 2 == 1) {
            std::swap(a[0], a[current_permutation - 1]);
        } else {
        // for odd permutations
            // swap i and last free elements
            std::swap(a[i], a[current_permutation - 1]);
        }
    }
}

void print_vector(std::vector<int> a) {
    for (std::vector<int>::const_iterator it = a.begin(); it != a.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}