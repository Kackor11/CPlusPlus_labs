#include <iostream>
#include <string>

int main() {

    std::string imie{};
    std::string nazwisko{};

    std::cout << "Podaj swoje imie: ";
    std::cin >> imie;
    std::cout << "Podaj swoje nazwisko: ";
    std::cin >> nazwisko;

    std::cout << "Witaj, " << imie << " " << nazwisko << "!" << std::endl;

    return 0;
}