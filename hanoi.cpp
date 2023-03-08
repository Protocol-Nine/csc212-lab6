#include <iostream>
void tower_solver(int n, int origin, int destination, int utility);

int main(int argc, char*argv[]) {
    int num_disks = std::stoi(argv[1]),
        source_rod = std::stoi(argv[2]),
        destination_rod = std::stoi(argv[3]),
        utility_rod = 6 - source_rod - destination_rod;

    tower_solver(num_disks, source_rod, destination_rod, utility_rod);
}

void tower_solver(int n, int origin, int destination, int utility) {

    if (n == 0) {
        return;
    }

    tower_solver(n - 1, origin, utility, destination);

    std::cout << "Move disk " << n << " from tower " << origin << " to tower " << destination << std::endl;

    tower_solver(n-1, utility, destination, origin);
}