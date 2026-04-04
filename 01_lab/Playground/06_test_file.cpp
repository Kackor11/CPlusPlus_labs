#include <iostream>
#include <vector>
#include <string>

int main() {

    std::vector<int> punkty_graczy {10, 20, 30, 40};

    punkty_graczy.at(2) = 99;
    punkty_graczy.pop_back();

    std::cout << "Aktualny rozmiar vektora: " << punkty_graczy.size() << std::endl;
    std::cout << "Obecny wynik gracza nr.2: " << punkty_graczy.at(2) << std::endl;

    punkty_graczy.clear();

    std::cout << punkty_graczy.empty() << std::endl;
    
    return 0;
}