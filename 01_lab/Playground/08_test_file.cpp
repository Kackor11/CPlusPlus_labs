#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<int> kolejka {10, 20, 30};

    kolejka.insert(kolejka.begin(), 99);
    kolejka.erase(kolejka.begin() + 2);

    std::cout << "Pierwszy element kolejki: " << kolejka.at(0) << std::endl;
    std::cout << "Drugi element kolejki: " << kolejka.at(1) << std::endl;
    std::cout << "Trzeci element kolejki: " << kolejka.at(2) << std::endl;

    return 0;
}