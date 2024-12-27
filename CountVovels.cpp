#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    // Using random_device and mt19937 generator
    std::random_device rd;
    std::mt19937 g(rd());
    
    std::shuffle(vec.begin(), vec.end(), g);
    
    for (int v : vec) {
        std::cout << v << " ";
    }
    
    return 0;
}
