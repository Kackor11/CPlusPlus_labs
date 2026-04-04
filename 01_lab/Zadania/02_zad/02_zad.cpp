#include <iostream>
#include <string>

int main() {

    std::string name{};

    std::cout << "Podaj swoje imie: ";
    std::cin >> name;
    std::cout << "Witaj " << name << "!" << std::endl;

    return 0;
}