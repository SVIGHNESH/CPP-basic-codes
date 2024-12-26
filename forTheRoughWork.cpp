#include <chrono>
#include <iostream>
using namespace std;

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    // Code to measure

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Execution time: " << duration.count() << " microseconds" << std::endl;
}