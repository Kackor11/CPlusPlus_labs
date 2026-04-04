#include <iostream>
#include <string>

int main() {
    std::string napis{};

    std::cout << "Podaj dowolny napis: ";
    std::cin >> napis;

    while (std::cin.fail()) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "Podano niepoprawne dane..." << std::endl;
        std::cout << "Sprobuj jeszcze raz: ";
        std::cin >> napis;
    }

    int dlugosc_napisu{};
    dlugosc_napisu = napis.length();

    std::cout << "Dlugosc napisu " << napis << " = " << dlugosc_napisu << std::endl;

    return 0;
}