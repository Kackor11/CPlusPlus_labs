#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<int> dane {};
    dane.push_back(5);

    std::cout << "Rozmiar vektora dane: " << dane.size() << std::endl;
    std::cout << "Pojemnosc vektora dane: " << dane.capacity() << std::endl;

    dane.reserve(50);
    dane.push_back(5);

    std::cout << "Rozmiar vektora dane: " << dane.size() << std::endl;
    std::cout << "Pojemnosc vektora dane: " << dane.capacity() << std::endl;

    return 0;
}
